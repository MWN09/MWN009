package de.tuhh.diss.Rover;

import de.tuhh.diss.DistanceSensor.DistanceSensor;
import de.tuhh.diss.GyroSensor.GyroSensor;
import de.tuhh.diss.RoverDimensions.RoverDimensions;
import lejos.hardware.motor.EV3LargeRegulatedMotor;
import lejos.hardware.port.MotorPort;
import lejos.utility.Delay;

public class Rover {
/*
This class simplifies controlling the LEGO EV3 Robot. 
Movements of the robot are broken down into simple method calls.
*/
	
	// Motors
	private EV3LargeRegulatedMotor leftMotor;
	private EV3LargeRegulatedMotor rightMotor;
	
	// Sensors
	private GyroSensor gyro;
	private DistanceSensor dist;
	
	private RoverDimensions dim;
	
	// member variables
	private int speedLeft;
	private int speedRight;
	private final int MIN_SPEED = 50;
	private int maxSpeed;

	public Rover() {
	// constructor
	    this.init();
		this.syncMotorsSetup();
		this.setSpeed(MIN_SPEED, MIN_SPEED); // sets initial speed of left and right motor [deg/s]
	}
	
	private void init() {
	    leftMotor = new EV3LargeRegulatedMotor(MotorPort.B);
	    rightMotor = new EV3LargeRegulatedMotor(MotorPort.C);
	    gyro = new GyroSensor();
	    dist = new DistanceSensor();
	    dim = new RoverDimensions();
    }

    private void syncMotorsSetup() {
		EV3LargeRegulatedMotor[] syncList = {rightMotor};
		leftMotor.synchronizeWith(syncList);
	}
	
	public void setSpeed(int speedLeft, int speedRight) {
	// set speed of motors, within physical limitations
		this.updateMaxSpeed();
		
		leftMotor.startSynchronization();
		
		if (speedLeft > this.maxSpeed) {
			this.speedLeft = this.maxSpeed;
		}
		else if (speedLeft < this.MIN_SPEED) {
			this.speedLeft = this.MIN_SPEED;
		}
		else {
			this.speedLeft = speedLeft;
		}
		leftMotor.setSpeed(this.speedLeft);

		if (speedRight > this.maxSpeed) {
			this.speedRight = this.maxSpeed;
		}
		else if (speedRight < this.MIN_SPEED) {
			this.speedRight = this.MIN_SPEED;
		}
		else {
			this.speedRight = speedRight;
		}
		rightMotor.setSpeed(this.speedRight);

		leftMotor.endSynchronization();
	}
	
	private void updateMaxSpeed() {
	// determine max possible speed, depending on battery voltage of robot
		this.maxSpeed = (int) Math.min(leftMotor.getMaxSpeed(), rightMotor.getMaxSpeed());
	}
	
	public void adjustSpeed(int adjustmentLeft, int adjustmentRight) {
	// fine adjust speed of each motor
		this.setSpeed(speedLeft + adjustmentLeft, speedRight + adjustmentRight);
	}
	
	public void driveForward() {
	// drive forward until told otherwise
		leftMotor.startSynchronization();
		leftMotor.backward();
		rightMotor.backward();
		leftMotor.endSynchronization();
	}
	
	public void driveBackward() {
	// drive backward until told otherwise
		leftMotor.startSynchronization();
		leftMotor.forward();
		rightMotor.forward();
		leftMotor.endSynchronization();
	}
	
	public void driveCM(double distance) {
	// drive forward or backward for desired distance in [cm]
		double wheelRotAngle = (distance / dim.WHEEL_CIRCUMFERENCE) * 360;
		double motorRotAngle = wheelRotAngle / dim.GEAR_RATIO;
		
		Delay.msDelay(150); // required to pretend simultaneous motor calls
		
		this.updateMaxSpeed();
		this.setSpeed(this.maxSpeed/2, this.maxSpeed/2);
		
		leftMotor.startSynchronization();
		leftMotor.rotate((int) (-motorRotAngle), true);
		rightMotor.rotate((int) (-motorRotAngle), true);
		leftMotor.endSynchronization();
		
		// pauses execution of the program until distance is reached
		leftMotor.waitComplete();
		rightMotor.waitComplete();
		
		Delay.msDelay(50);
		
	}
	
	public boolean approach(double reqDist) {
	/* Approach (or withdraw from) an obstacle to a specified distance (reqDist).
	 * Speed and heading are controlled using proportional controllers.
	 * return: true when success, false when failed.*/
		gyro.resetAngle();
		double p_gyro = 50;
		double e_gyro;
		
		int speed;
		double p = 280;
		double e;
		double e_init;
		
		try {
			e = dist.getCenterDistanceCM() - reqDist;
			e_init = e;
			if (e >= 0) {
				this.driveForward();
			} 
			else if (e < 0) {
				this.driveBackward();
			}
			else {
				return true;
			}
			
			while (true) {
				e_gyro = gyro.getAngle();
				e = (dist.getCenterDistanceCM() - reqDist);
				if ((e == 0) || ((e_init / e) < 0)) {
	                break;
	            }
				else {
					speed =  (int) Math.abs(p * e);
					this.setSpeed(speed, speed);
					this.adjustSpeed((int) (p_gyro*e_gyro), (int) -(p_gyro*e_gyro));
				}
			}
			return true;
		}
		catch (ArithmeticException ex) {
			System.out.println(ex);
			return false;
		}
		finally {
			this.stop();
		}		
	}
		
	public void turn(int reqDeg) {
	// turn for a provided angle using gyro feedback and p-controller
		gyro.resetAngle();
		
		double p = 14;
		double e = gyro.getAngle() - reqDeg; 
		double e_init = e;
		int speed;
		
		if (e > 0) {
			leftMotor.startSynchronization();
			leftMotor.backward();
			rightMotor.forward();
			leftMotor.endSynchronization();
		}
		else if (e < 0) {
			leftMotor.startSynchronization();
			leftMotor.forward();
			rightMotor.backward();
			leftMotor.endSynchronization();
		}
		else {
			this.stop();
			return;
		}
		
		while(true) {
			e = gyro.getAngle() - reqDeg;
			if ((e == 0) || ((e_init / e) < 0)) {
				break;
			}
			else {
				speed = (int) Math.abs(p * e);
				this.setSpeed(speed,speed);
				continue;
			}
		}
		this.stop();
	}
	
	public void stop() {
	// stop all motors
		leftMotor.startSynchronization();
		leftMotor.stop(true);
		rightMotor.stop(true);
		leftMotor.endSynchronization();
	}
}


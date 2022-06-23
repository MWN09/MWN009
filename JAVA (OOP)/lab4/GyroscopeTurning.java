package de.tuhh.diss.lab4;

import de.tuhh.diss.GyroSensor.GyroSensor;
import de.tuhh.diss.RoverDimensions.RoverDimensions;
import lejos.hardware.motor.EV3LargeRegulatedMotor;

public class GyroscopeTurning implements Turner{
	
	private int speed;
	private double motorToTurningRatio;
	
	// Motor Setup
	private EV3LargeRegulatedMotor leftMotor;
	private EV3LargeRegulatedMotor rightMotor;
	private GyroSensor gyro;
	
	public GyroscopeTurning(RoverDimensions dim, EV3LargeRegulatedMotor leftMotor, EV3LargeRegulatedMotor rightMotor, GyroSensor gyro) {
		this.leftMotor = leftMotor;
		this.rightMotor = rightMotor;
		this.gyro = gyro;
		
		this.speed = 20; // initial turning speed [deg/s]
		this.motorToTurningRatio = (dim.TRACK_WIDTH / dim.WHEEL_DIAMETER) / dim.GEAR_RATIO;
	}

	@Override
	public void setSpeed(int degPerSec) {
		this.speed = Math.abs(degPerSec);		
	}

	@Override
	public void turn(int deg) {
		gyro.resetAngle();
		
		// must be set before every turn, in case speed was changed elsewhere (e.g. in parent class)
		leftMotor.setSpeed((int) (this.speed * motorToTurningRatio));
		rightMotor.setSpeed((int) (this.speed * motorToTurningRatio));
		
		if (deg <= 0) {
			leftMotor.backward();
			rightMotor.forward();
		} else {
			leftMotor.forward();
			rightMotor.backward();
		}
		
		while(leftMotor.isMoving() || rightMotor.isMoving()) {
			if(Math.abs(gyro.getAngle()) <= Math.abs(deg)) {
				continue;
			} else {
				leftMotor.stop();
				rightMotor.stop();
			}
		} 
	}
	
}

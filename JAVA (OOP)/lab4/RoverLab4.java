package de.tuhh.diss.lab4;


import de.tuhh.diss.GyroSensor.GyroSensor;
import de.tuhh.diss.RoverDimensions.RoverDimensions;
import lejos.hardware.motor.EV3LargeRegulatedMotor;
import lejos.hardware.port.MotorPort;

public class RoverLab4 {
	
	// Motor Setup
	private EV3LargeRegulatedMotor leftMotor;
	private EV3LargeRegulatedMotor rightMotor;
	private GyroSensor gyro;
	
	private Turner turner1;
	private Turner turner2;
	
	private RoverDimensions dimensions = new RoverDimensions();
	
	public RoverLab4() {
		dimensions = new RoverDimensions();
		leftMotor = new EV3LargeRegulatedMotor(MotorPort.B);
		rightMotor = new EV3LargeRegulatedMotor(MotorPort.C);
		gyro = new GyroSensor();
		turner1 = new SimpleTurning(dimensions, leftMotor, rightMotor);
		turner2 = new GyroscopeTurning(dimensions, leftMotor, rightMotor, gyro);
	}
	
	public static void main(String[] args) {
		
		RoverLab4 rover = new RoverLab4();
		
		rover.turner1.setSpeed(30);
		rover.turner1.turn(-180);
		rover.turner2.setSpeed(30);
		rover.turner2.turn(180);
	}
}

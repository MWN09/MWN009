package de.tuhh.diss.lab2;

import lejos.hardware.motor.EV3LargeRegulatedMotor;
import lejos.hardware.port.MotorPort;

public class Task3 {

	public static void main(String[] args) {
				
		double distance = 0.3; // meter
		
		double wheelRotation = calcWheelRot(distance);
		double motorRotation = calcMotorRot(wheelRotation);
		
		driveStraight((int) motorRotation);

	}
	
	public static double calcWheelRot(double distance) {
		final double PI = 3.14;
		final double WHEEL_DIAMETER = 0.054; // [m]
		
		double circumference = PI * WHEEL_DIAMETER;
		
		double wheelRot = (distance / circumference) * 360;
		
		return wheelRot;
	}
	
	public static double calcMotorRot(double wheelRot) {
		final double COGS_SMALL_GEAR = 8; // Motor' gear
		final int COGS_BIG_GEAR = 24; // Wheel' gear
		
		double gearRatio = COGS_SMALL_GEAR / COGS_BIG_GEAR; //gear ratio = rotations of a driver gear (motor) : rotations of 
//		a driven gear (Wheel)
		
		double motorRot = wheelRot / gearRatio;
		
		return motorRot;
	}
	
	public static void driveStraight(int motorRot) {
		EV3LargeRegulatedMotor leftMotor = new EV3LargeRegulatedMotor(MotorPort.B);
		EV3LargeRegulatedMotor rightMotor = new EV3LargeRegulatedMotor(MotorPort.C);
		
		leftMotor.setSpeed(100);
		rightMotor.setSpeed(100);
		
		leftMotor.rotate(motorRot, true);
		rightMotor.rotate(motorRot, true);
		
		while(leftMotor.isMoving() || rightMotor.isMoving()) {
			continue;
		}
	}

}

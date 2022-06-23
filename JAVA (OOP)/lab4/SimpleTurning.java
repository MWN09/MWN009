package de.tuhh.diss.lab4;

import de.tuhh.diss.RoverDimensions.RoverDimensions;
import lejos.hardware.motor.EV3LargeRegulatedMotor;

public class SimpleTurning implements Turner {
	
	private int speed;
	private double motorToTurningRatio;
	
	// Motor Setup
	private EV3LargeRegulatedMotor leftMotor;
	private EV3LargeRegulatedMotor rightMotor;
		
	public SimpleTurning(RoverDimensions dim, EV3LargeRegulatedMotor leftMotor, EV3LargeRegulatedMotor rightMotor) {
		this.leftMotor = leftMotor;
		this.rightMotor = rightMotor;
		
		this.speed = 20; // initial turning speed [deg/s]
		// ratio between one motor rotation and the rotation of the rover around its main axis
		this.motorToTurningRatio = (((dim.WIDTH + dim.INNER_TRACK_WIDTH)/2) / dim.WHEEL_DIAMETER) / dim.GEAR_RATIO;
	}

	@Override
	public void setSpeed(int degPerSec) {
		this.speed = Math.abs(degPerSec);
	}

	@Override
	public void turn(int deg) {
		// must be set before every turn, in case speed was changed elsewhere (e.g. in parent class)
		leftMotor.setSpeed((int) (this.speed * motorToTurningRatio));
		rightMotor.setSpeed((int) (-this.speed * motorToTurningRatio));
		
		leftMotor.rotate((int) (deg * this.motorToTurningRatio), true);
		rightMotor.rotate((int) (-deg * this.motorToTurningRatio), true);
		
		while(leftMotor.isMoving() || rightMotor.isMoving()) {
			continue;
		}
	}
}

package de.tuhh.diss.RoverDimensions;

public class RoverDimensions {
/*
This class defines dimensions of the LEGO EV3 Robot.
*/
	
	// Rover Dimensions in cm
	public final double WIDTH = 15.1;
	public final double LENGHT = 18;
	public final double INNER_TRACK_WIDTH = 9.5;
	public final double TRACK_WIDTH = (WIDTH + INNER_TRACK_WIDTH)/2;
	public final double DIST_CENTER_TO_COLOR_SENSOR = 4.5;
	public final double DIST_CENTER_TO_ULTRASONIC_SENSOR = 3.5;
	public final double WHEEL_DIAMETER = 5.5;
	public final double WHEEL_CIRCUMFERENCE = Math.PI * WHEEL_DIAMETER;
	
	// Gear Properties
	public final double COGS_MOTOR_GEAR = 8;
	public final double COGS_WHEEL_GEAR = 24;
	public final double GEAR_RATIO = COGS_MOTOR_GEAR / COGS_WHEEL_GEAR; // ratio of motor rot. to wheel rot.
	
}

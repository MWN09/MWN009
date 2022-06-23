package de.tuhh.diss.lab3;


import de.tuhh.diss.ColorSensor.ColorSensor;
import de.tuhh.diss.DistanceSensor.DistanceSensor;
import de.tuhh.diss.Rover.Rover;
import de.tuhh.diss.RoverDimensions.RoverDimensions;

import lejos.hardware.lcd.LCD;


public class Task3 {
	
	// initiate class objects
	static Rover rover = new Rover();
	static RoverDimensions dimensions = new RoverDimensions();
	static ColorSensor color = new ColorSensor();
	static DistanceSensor distance = new DistanceSensor();

	public static void main(String[] args) {
	// repeatedly approach any wall or object in front, if distance is larger than desired, to determine its color
		while (true) {
			double currentDist  = distance.getCenterDistanceCM(); // initial distance from center of robot to wall
			if (currentDist >= dimensions.MAX_DIST_COLOR_SENSOR) { // check if robot needs to move closer to the wall
				rover.driveForward();
				while (currentDist >= dimensions.MAX_DIST_COLOR_SENSOR) { // continuously measure distance to wall
					currentDist  = distance.getCenterDistanceCM();
					displayData(currentDist, "None");
				}
				rover.stop();
				displayData(currentDist, color.getColor()); //read distance and color and print to lcd
			}
		}
	}
	
	public static void displayData(double distance, String color) {
	// refresh LCD to show distance to an object and its color when possible
		LCD.clear();
		LCD.drawString("Distance: " + distance + "cm", 0, 2);
		LCD.drawString("Color: " + color, 0, 3);
	}
}

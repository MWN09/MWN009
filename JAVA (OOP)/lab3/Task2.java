package de.tuhh.diss.lab3;

import lejos.hardware.lcd.LCD;
import lejos.hardware.port.SensorPort;
import lejos.hardware.sensor.EV3UltrasonicSensor;
import lejos.robotics.SampleProvider;
import lejos.utility.Delay;

public class Task2 {

	public static void main(String[] args) {
		
		EV3UltrasonicSensor distSens = new EV3UltrasonicSensor(SensorPort.S4);
		SampleProvider dist = distSens.getDistanceMode();
		distSens.enable(); // This will turn on the led light which indicates, ultrasonic sensor is working

		// allocate memory for color sensor sample data
		float[] sampleArray = new float [dist.sampleSize()];
	
		while (distSens.isEnabled()) {		
			dist.fetchSample(sampleArray, 0);
			float distance = 100*sampleArray[0];
			LCD.clear();
			LCD.drawString("Distance: " + distance + " cm", 0, 2);
			Delay.msDelay(500);
		}
	}

}

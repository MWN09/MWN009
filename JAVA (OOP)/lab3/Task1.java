package de.tuhh.diss.lab3;

import lejos.hardware.port.SensorPort;
import lejos.hardware.sensor.EV3ColorSensor;
import lejos.hardware.sensor.SensorMode;
import lejos.robotics.Color;
import lejos.utility.Delay;
import lejos.hardware.lcd.LCD;

public class Task1 {

	public static void main(String[] args) {
	
		EV3ColorSensor colorSensor = new EV3ColorSensor(SensorPort.S1);
		colorSensor.setFloodlight(true);
		
		SensorMode sampleProvider = colorSensor.getColorIDMode();

		// allocate memory for color sensor sample data
		float[] sampleArray = new float [sampleProvider.sampleSize()];
	
		while (true) {
			sampleProvider.fetchSample(sampleArray, 0);
			
			String color = idToColor((int) sampleArray[0]);
			
			LCD.clear();
			LCD.drawString(color, 0, 2);
			Delay.msDelay(500);
		}
		
	}
	
	public static String idToColor(int id) {
		switch(id) {
		case Color.NONE:
			return "NONE";
		case Color.RED:
			return "RED";
		case Color.GREEN:
			return "GREEN";
		case Color.BLUE:
			return "BLUE";
		case Color.YELLOW:
			return "YELLOW";
		case Color.MAGENTA:
			return "MAGENTA";
		case Color.ORANGE:
			return "ORANGE";
		case Color.WHITE:
			return "WHITE";
		case Color.BLACK:
			return "BLACK";
		case Color.PINK:
			return "PINK";
		case Color.GRAY:
			return "GRAY";
		case Color.LIGHT_GRAY:
			return "LIGHT_GRAY";
		case Color.DARK_GRAY:
			return "DARK_GRAY";
		case Color.CYAN:
			return "CYAN";
		case Color.BROWN:
			return "BROWN";
		default:
			return "NONE";
		}
	}
	
}

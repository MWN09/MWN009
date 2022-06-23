package de.tuhh.diss.ColorSensor;

import java.util.Arrays;

import lejos.hardware.port.SensorPort;
import lejos.hardware.sensor.EV3ColorSensor;
import lejos.hardware.sensor.SensorMode;
import lejos.robotics.Color;

public class ColorSensor {
/*
This class simplifies using the color sensor of the LEGO EV3 Robot.
*/
	
    public final double READING_DIST = 3; // optimal sensor distance for color reading [cm]
	private final int SAMPLE_SIZE = 10;
	
	// ColorSensor Setup
	private static EV3ColorSensor colorSensor = new EV3ColorSensor(SensorPort.S1);
	private SensorMode color;
	private float[] colorSample;
 
	public ColorSensor() {
	// constructor
	    this.init();
		colorSensor.setFloodlight(false); // initially disable floodlight
	}
	
	private void init() {
	    color = colorSensor.getColorIDMode();
	    colorSample = new float [color.sampleSize()]; // allocate memory for color sensor sample data
    }

    public String getColor() {
	// return: string of color of object in front of color sensor
		int[] colorArray = new int [SAMPLE_SIZE]; // size of array sets number of samples taken
		
		for (int i = 0; i < colorArray.length; i++) {
			color.fetchSample(colorSample, 0);
			colorArray[i] = (int) colorSample[0];
		}
		return idToColor(this.mostFrequentNumber(colorArray));
	} 
	
	private int mostFrequentNumber(int a[]) {
	// return: (smallest) number that appears most often in the array
		if (a == null || a.length == 0)
	        return Color.NONE; 

	    Arrays.sort(a);

	    int previous = a[0];
	    int popular = a[0];
	    int count = 1;
	    int maxCount = 1;

	    for (int i = 1; i < a.length; i++) {
	        if (a[i] == previous)
	            count++;
	        else {
	            if (count > maxCount) {
	                popular = a[i-1];
	                maxCount = count;
	            }
	            previous = a[i];
	            count = 1;
	        }
	    }
	    return count > maxCount ? a[a.length-1] : popular;
	}
	
	public String idToColor(int id) {
	// return: color string belonging to color id
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

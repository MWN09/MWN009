package de.tuhh.diss.lab3;

import lejos.hardware.Button;
import lejos.hardware.lcd.LCD;
import lejos.hardware.port.SensorPort;
import lejos.hardware.sensor.EV3ColorSensor;
import lejos.hardware.sensor.SensorMode;
import lejos.utility.Delay;

public class TestingTask01 
{

	public static void main(String[] args) {
		EV3ColorSensor colSens = new EV3ColorSensor(SensorPort.S1);
		SensorMode colorId = colSens.getColorIDMode();
		float[] sampleArray = new float [colorId.sampleSize()];//float size-whatever the sample size
		while(true)
		{			
			colorId.fetchSample(sampleArray, 0);//start from 0 memory stack
			int currentColor=colSens.getColorID();//(int) SampleArray[0];
			String colorDetected = idtoColor(currentColor);
			LCD.clear();
			LCD.drawString(colorDetected, 1, 1);
			Delay.msDelay(500);
			if (Button.ESCAPE.isDown())
			{
				System.exit(0);
			}
		}
	}
	public static String idtoColor(int id) {
		switch(id){
		case 0:
			return "Red";
		case 1:
			return "Green";
		case 2:
			return "Blue";
		case 3:
			return "Yellow";
		case 4:
			return "Magenta";
		case 5:
			return "Orange";
		case 6:
			return "White";
		case 7:
			return "Black";
		case 8:
			return "Pink";
		case 9:
			return "Grey";
		case 10:
			return "light Grey";
		case 11:
			return "Dark Grey";
		case 12:
			return "Cyan";
		default:
			return "None";
		
		}
		
	}

}

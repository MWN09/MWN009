package de.tuhh.diss.lab3;

import lejos.hardware.Button;
import lejos.hardware.lcd.LCD;
import lejos.hardware.motor.EV3LargeRegulatedMotor;
import lejos.hardware.port.MotorPort;
import lejos.hardware.port.SensorPort;
import lejos.hardware.sensor.EV3ColorSensor;
import lejos.hardware.sensor.EV3UltrasonicSensor;
import lejos.hardware.sensor.SensorMode;
import lejos.robotics.SampleProvider;
import lejos.utility.Delay;

public class TestingTask03 {

	public static void main(String[] args) {
//		UltrasonicSensor Setup
		EV3UltrasonicSensor distSens = new EV3UltrasonicSensor(SensorPort.S4);
		distSens.enable();
		SampleProvider dist = distSens.getDistanceMode();
		float [] sampleArrayU = new float[dist.sampleSize()];
		
		
//		ColorSensor Setup
		EV3ColorSensor colSens = new EV3ColorSensor(SensorPort.S1);
		SensorMode colorId = colSens.getColorIDMode();
		float[] sampleArrayC = new float [colorId.sampleSize()];//float size-whatever the sample size
		
//		Motor
		
//		Motor Setup
		EV3LargeRegulatedMotor leftMotor = new EV3LargeRegulatedMotor(MotorPort.B);
		EV3LargeRegulatedMotor rightMotor = new EV3LargeRegulatedMotor(MotorPort.C);
		
		leftMotor.setSpeed(200);
		rightMotor.setSpeed(200);
		leftMotor.backward();
		rightMotor.backward();
		
		while(distSens.isEnabled()) {
			
			dist.fetchSample(sampleArrayU, 0);//
			float ultrasonicSensorDistance= 45/10;
			float distanceValue=ultrasonicSensorDistance+100*(float)sampleArrayU[0];
			String distanceString=new String (Float.toString(distanceValue));
			
			
			LCD.clear(0,0,3);
			LCD.drawString("Distance: ",0,1);
			LCD.drawString(distanceString, 0, 3);

			
//			System.out.println(dist);
			Delay.msDelay(250);
			if (distanceValue<7.4)
			{
				leftMotor.stop();
				rightMotor.stop();
				
//			ColorSensor Loop
				while(true)
				{			
					colorId.fetchSample(sampleArrayC, 0);//start from 0 memory stack
					int currentColor=colSens.getColorID();//(int) SampleArray[0];
					String colorDetected = idtoColor(currentColor);
					LCD.clear();
					LCD.drawString("colorDetected", 1, 0);
					LCD.drawString(colorDetected, 1, 2);
					Delay.msDelay(500);
					if (Button.ESCAPE.isDown())
					{
						System.exit(0);
					}
				}
			}
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

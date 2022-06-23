package de.tuhh.diss.lab3;

import lejos.hardware.Button;
import lejos.hardware.lcd.LCD;
import lejos.hardware.port.SensorPort;
import lejos.hardware.sensor.EV3UltrasonicSensor;
import lejos.robotics.SampleProvider;
import lejos.utility.Delay;

public class TestingTask02 {

	public static void main(String[] args) {
		EV3UltrasonicSensor distSens = new EV3UltrasonicSensor(SensorPort.S4);
		distSens.enable();
		SampleProvider dist = distSens.getDistanceMode();
		float [] sampleArray = new float[dist.sampleSize()];//allocate the memory
		
		while(distSens.isEnabled())
		{
			
			dist.fetchSample(sampleArray, 0);//
			float ultrasonicSensorDistance= 45/10;
			float distanceValue=ultrasonicSensorDistance+100*(float)sampleArray[0];
			String distanceString=new String (Float.toString(distanceValue));
			
			
			LCD.clear(0,0,3);
			LCD.drawString("Distance: ",0,1);
			LCD.drawString(distanceString, 0, 3);

			
//			System.out.println(dist);
			Delay.msDelay(250);
			if (Button.ESCAPE.isDown())
			{
				System.exit(0);
			}
		}

	}


}

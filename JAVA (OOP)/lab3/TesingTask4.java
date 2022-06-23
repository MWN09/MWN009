package de.tuhh.diss.lab3;

import RoverControl.RoverControl;
import lejos.hardware.lcd.LCD;
import lejos.hardware.motor.EV3LargeRegulatedMotor;
import lejos.hardware.port.MotorPort;
import lejos.hardware.port.SensorPort;
import lejos.hardware.sensor.EV3GyroSensor;
import lejos.hardware.sensor.EV3UltrasonicSensor;
import lejos.robotics.SampleProvider;
import lejos.utility.Delay;

public class TesingTask4 {

	public static void main(String[] args) {
		RoverControl rover=new RoverControl();
		EV3GyroSensor gyroSens = new EV3GyroSensor(SensorPort.S3);
		gyroSens.reset();
		SampleProvider angle = gyroSens.getAngleMode(); //in degrees
		float [] sampleArrayG = new float[angle.sampleSize()];
		while(true)
		{			
			angle.fetchSample(sampleArrayG, 0);//start from 0 memory stack
			String angleString=new String (Float.toString((float)sampleArrayG[0]));
			LCD.clear();
			LCD.drawString("Angle", 1, 1);
			LCD.drawString(angleString, 1, 3);
			Delay.msDelay(500);
			rover.driveOnlyLeftMotor();
			}
		}
	}
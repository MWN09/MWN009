package de.tuhh.diss.lab3;

import RoverControl.RoverControl;
import lejos.hardware.lcd.LCD;
import lejos.utility.Delay;
import GyroSens.GyroSens;

public class Task4 {
	static RoverControl rover=new RoverControl();
	static GyroSens gyro=new GyroSens();
	public static void main(String[] args) {
		
		
		while (true) {
			rover.driveOnlyLeftMotor();
			String angleString= gyro.getRotationDeg();
			LCD.clear();
			LCD.drawString("Angle", 1, 1);
			LCD.drawString(angleString, 0, 3);
			Delay.msDelay(500);
		}
	}
}


package de.tuhh.diss.lab2;

import lejos.hardware.lcd.LCD;
import lejos.utility.*;

public class Task1 {

	public static void main(String[] args) {
	
		String s = new String("Ahoi World!");
		int x = 0;
		int y = 2;
		int delay = 5000;
		
		LCD.drawString(s, x, y);
		Delay.msDelay(delay);
		
		showBanner(s, y);
	}
	
	public static void showBanner(String s, int y) {
		int delay = 250;
		for (int i = LCD.DISPLAY_CHAR_WIDTH; i > 0-s.length() ; i--) {
			LCD.clear();
			LCD.drawString(s, i, y);
			Delay.msDelay(delay);
		}
	}

}

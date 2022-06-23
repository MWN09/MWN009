package de.tuhh.diss.lab2;

import lejos.hardware.lcd.LCD;
import lejos.utility.*;

public class Testing {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
	    String s= new String ("Hello World!");
	    int x=0; // Column #
	    int y=2; // Row #
	    int delay=1000;
	    LCD.drawString(s, x, y);
	    LCD.drawInt(LCD.DISPLAY_CHAR_WIDTH,0,0);
	    LCD.drawInt(LCD.DISPLAY_CHAR_DEPTH,0,1);
		Delay.msDelay(delay);
		LCD.clear();
		myBanner(s);
	}
	public static void myBanner(String s) {
		for(int l=0; l<LCD.DISPLAY_CHAR_DEPTH;l++) {
			for(int i=0; i< (s.length() + LCD.DISPLAY_CHAR_WIDTH +1) ; i++) {
		    	int delay=100;
				LCD.clear();
	//			Delay.msDelay(delay);
//				String c= new String ("# of entries:");
//				LCD.drawString(c, 0,0);
//				LCD.drawInt(i,1+c.length(),0);
//				String m= new String ("I-s.length()");
//				LCD.drawString(m, 0,1);
//				LCD.drawInt(i-s.length(),1+m.length(),1);
				LCD.drawString(s, i-s.length(), l);
				Delay.msDelay(delay);	
			}
		}
	}
}

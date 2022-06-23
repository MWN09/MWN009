package de.tuhh.diss.GyroSensor;

import lejos.hardware.port.SensorPort;
import lejos.hardware.sensor.EV3GyroSensor;
import lejos.robotics.SampleProvider;

public class GyroSensor {
	
	private static EV3GyroSensor gyroSensor = new EV3GyroSensor(SensorPort.S3);
	private SampleProvider angle;
	private float [] sampleArray;
	
	public GyroSensor() {
	// constructor
	    this.init();
		this.resetAngle();
	}
	
	private void init() {
        angle = gyroSensor.getAngleMode(); //in degrees
        sampleArray = new float[angle.sampleSize()];
    }

    public void resetAngle() {
		gyroSensor.reset();
	}
	
	public double getAngle() {
		angle.fetchSample(sampleArray, 0);
		return ((double) sampleArray[0]);
	}
}
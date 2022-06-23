package de.tuhh.diss.DistanceSensor;

import de.tuhh.diss.RoverDimensions.RoverDimensions;
import lejos.hardware.port.SensorPort;
import lejos.hardware.sensor.EV3UltrasonicSensor;
import lejos.robotics.SampleProvider;

public class DistanceSensor {
/*
This class simplifies using the ultrasonic sensor of the LEGO EV3 Robot.
*/
	
	private final int DISTANCE_CONVERSION_FACTOR_MM_TO_CM = 100;
	
    // UltrasonicSensor
	private static EV3UltrasonicSensor distSensor = new EV3UltrasonicSensor(SensorPort.S4);
	private SampleProvider dist;
	private float[] distSample;
	 
	private RoverDimensions dim;
	
	public DistanceSensor() {
	// constructor
	    this.init();
		distSensor.enable(); // turn on indicator LED -> visual proof that sensor is active
	}
	
	private void init() {
	    dist = distSensor.getDistanceMode();
	    distSample = new float [dist.sampleSize()]; // allocate memory for distance sensor sample data
	    dim = new RoverDimensions();
	}
	
	public double getDistanceCM() throws ArithmeticException {
	// return: distance between sensor and object
		dist.fetchSample(distSample, 0);
		if (Float.isInfinite(distSample[0])) {
			throw new ArithmeticException();
		}
		return (double) (DISTANCE_CONVERSION_FACTOR_MM_TO_CM * distSample[0]);
	}
	
	public double getCenterDistanceCM() throws ArithmeticException {
	// return: distance between center of robot and object in front of sensor
		try {
			return (double) (this.getDistanceCM() + dim.DIST_CENTER_TO_ULTRASONIC_SENSOR);
		}
		catch (ArithmeticException ex) {
			throw(ex);
		}
	}
}

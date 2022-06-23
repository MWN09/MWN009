package de.tuhh.diss.lab2;

import MazebotSim.MazebotSimulation;
import MazebotSim.Visualization.GuiMazeVisualization;
import de.tuhh.diss.lab4.RoverLab4;

public class MainSimulated {
	
	/**
	 *  This class is only intended to set up and start a simulation. Don't put
	 *  task specific information into this class. Just call the main function,
	 *  e.g., Task1.main() of the program you want to simulate in here. 
	 *  
	 *  You may, however, change the maze, or starting position here. For detailed
	 *  information about the simulator and how it can be configured, visit
	 *  https://collaborating.tuhh.de/cuy1171/diss-mazebot-simulation/-/wikis/home
	 */
	public static void main(String[] args) {
		MazebotSimulation sim = new MazebotSimulation("mazes/4x4_1.png", 1.4,  1.4);
		GuiMazeVisualization gui = new GuiMazeVisualization(1.4, sim.getStateAccessor());
		sim.scaleSpeed(1);
        sim.setRobotPosition(0.6, 0.175, 180);
		
		sim.startSimulation();
		gui.startVisualization();	
				
		lab5.waqar.maze.v1.WaqarMazeUpdate.main(args);
				
		sim.stopSimulation();
	}

}

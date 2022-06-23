package de.tuhh.diss.lab5;

import de.tuhh.diss.ColorSensor.ColorSensor;
import de.tuhh.diss.DistanceSensor.DistanceSensor;
import de.tuhh.diss.Rover.Rover;
import de.tuhh.diss.RoverDimensions.RoverDimensions;
import lejos.hardware.Button;
import lejos.hardware.Sound;
import lejos.hardware.lcd.LCD;
import lejos.utility.Delay;

public class MazeTraversal {

    private DistanceSensor dist;
    private ColorSensor color;
    private Rover rover;
    private RoverDimensions dim;

    private String destColor;
    private final double TILE_SIZE = 35; // 35x35cm
    
    public static void main(String[] args) {
        MazeTraversal maze = new MazeTraversal();

        maze.startMaze();
        maze.navigate();
    }

    public MazeTraversal() {
        dist = new DistanceSensor();
        color = new ColorSensor();
        rover = new Rover();
        dim = new RoverDimensions();

        Sound.setVolume(50);
    }

    private void startMaze() {
        this.pickDestColor();

        Delay.msDelay(2000);
        
        LCD.clear();
        LCD.drawString("Solving Maze!", 0, 2);
        Sound.playTone(800, 500);
    }

    private void pickDestColor() {
       int counter = 1;
       String colors[] = {"RED", "GREEN", "BLUE" };
       colorSelectionDisplay(colors);
       LCD.drawString(">", 0, counter);
       
       while (true) {
           Button.waitForAnyPress();
           LCD.clear(0, counter, 1);
           if (Button.DOWN.isDown()) {
               if (counter < colors.length) {
                   counter++;
               }
               else {
                   counter = 1;
               }
           }
           if (Button.UP.isDown()) {
               if (counter > 1) {
                   counter--;
               }
               else {
                   counter = colors.length;
               }
           }
           colorSelectionDisplay(colors);
           LCD.drawString(">", 0, counter);
           if (Button.ENTER.isDown()) {
               break;
           }
       }
       destColor = colors[counter-1];
       desiredColorDisplay();
    }

   private void desiredColorDisplay() {
       LCD.clear();
       LCD.drawString("Desired Color Is:", 0, 0);
       LCD.drawString(destColor, 2, 1);
   }

   private void colorSelectionDisplay(String[] colors) {
       LCD.clear();
       LCD.drawString("Choose The Color", 0, 0);
       
       for (int i = 0; i < colors.length; i++) {
           LCD.drawString(colors[i], 1, 1 + i);
       }
   }

    private void navigate() {
        int counter;
        double wallDist;
        double reqDist;

        while (true) {
            try {
                wallDist = dist.getCenterDistanceCM();
                if (wallDist > TILE_SIZE / 2) {
                    reqDist = wallDist - ((wallDist - (TILE_SIZE / 2)) % TILE_SIZE);
                    if (reqDist == wallDist) {
                        reqDist -= TILE_SIZE;
                    }
                    rover.approach(reqDist); // always moves up to middle of next tile
                    if ((wallDist - reqDist) <= (TILE_SIZE / 2)) { // if rover was not centered on tile
                        continue;
                    }
                    if (reqDist < TILE_SIZE) {
                        this.checkHeading(); // when facing a wall straight ahead -> place orthogonally
                    }
                }
            } catch (ArithmeticException ex) {
                rover.driveCM(TILE_SIZE);
            }
            
            rover.turn(-90); // turn to the right, to check if there is a wall

            counter = 0;
            try {
                while (dist.getCenterDistanceCM() < TILE_SIZE) { // standing in front of wall
                    rover.approach(TILE_SIZE / 2);
                    counter++;
                    if (counter == 3) {
                        if (this.checkDeadEnd()) {
                            this.endMaze();
                            return;
                        } else {
                            break;
                        }
                    }
                    rover.turn(90);
                }
            } catch (ArithmeticException ex) {
                continue;
            }
        }
    }

    private boolean checkDeadEnd() {
        for (int i = 0; i < 3; i++) {
            // move close to wall for color detection
            rover.approach(color.READING_DIST + dim.DIST_CENTER_TO_COLOR_SENSOR);
            
            String myColor = color.getColor();
            if (myColor == destColor) {
                return true;
            }
            rover.driveCM(-3); // backing off the wall, for distance sensor to work again
            rover.approach(TILE_SIZE / 2); // center robot between walls
            rover.turn(-90);
        }
        return false;
    }

    private void checkHeading() {
        double gamma = 30;

        rover.turn((int) gamma / 2);
        double a = dist.getDistanceCM();

        rover.turn((int) -gamma);
        double b = dist.getDistanceCM();

        // triangle calculation
        double c = Math.sqrt(Math.pow(a, 2) + Math.pow(b, 2) - (2 * a * b * Math.cos(Math.toRadians(gamma))));
        double beta = Math.acos((Math.pow(b, 2) - Math.pow(a, 2) - Math.pow(c, 2)) / (-2 * a * c));
        double hc = a * Math.sin(beta);
        double offsetAngle = Math.toDegrees(Math.acos(hc / a));

        // turn to face wall orthogonally
        rover.turn((int) (gamma - offsetAngle));  
    }

    private void endMaze() {
        LCD.clear();
        LCD.drawString("Maze Complete!", 0, 2);
        Sound.playTone(800, 500);
    }
}

/*
 * HelloSwing.java
 *
 * Created on February 12, 2007, 1:06 PM
 *
 * Simple GUI demo
*/

import javax.swing.*;


public class HelloSwing extends JFrame{
    
  	public static void main(String args[]){
        new HelloSwing();
    } // end main
    
    /** Creates a new instance of HelloSwing */
    public HelloSwing() {
        super("Hello, world!");
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        java.awt.Container surface = this.getContentPane();
        surface.add(new JLabel("What up?!"));
        
        
        this.setSize(320, 240);
        this.setVisible(true);
        
    } // end constructor
    
} // end class def

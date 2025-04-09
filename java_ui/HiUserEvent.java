/*
 * HiUserEvent.java
 *
 * Created on February 19, 2007, 12:22 PM
 *
 * Demonstrates Action Adapter and event-handling
 */

/**
 *
 * @author aharris
 */

import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class HiUserEvent extends JFrame {
    private static final long serialVersionUID = 1L;
    /** Creates a new instance of HiUserEvent */
    
    // instance vars
    JLabel output = new JLabel("Output");
    JButton clickMe = new JButton("Click me");
    JTextField input = new JTextField("Input");
    
    public static void main(String args[]){
        new HiUserEvent();
    } // end main
    
    
    /** Creates a new instance of HiUserEvent */
    public HiUserEvent() {
        super("Hi, user");
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

	Font myFont = new Font("Serif",0, 40);
	output.setFont(myFont);
	clickMe.setFont(myFont);
	input.setFont(myFont);

        Container surface = this.getContentPane();
        surface.setLayout(new GridLayout(3,1));
        surface.add(output);
        surface.add(clickMe);
        surface.add(input);
        EventHandler eh = new EventHandler();
        clickMe.addActionListener(eh);
        this.pack();
        this.setVisible(true);
    } // end constructor
} // end class def

class EventHandler implements ActionListener{
    public void actionPerformed(ActionEvent e){
        System.out.println("I got clicked");
        //System.out.println(input.getText());
    }
}


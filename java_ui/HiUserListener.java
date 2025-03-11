/*
 * HiUserListener.java
 *
 * Created on February 12, 2007, 1:27 PM
 *
 * Demo Event-handling with action Listener
 */

/**
 *
 * @author aharris
 */
import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class HiUserListener extends JFrame implements ActionListener {
    JLabel lblOutput = new JLabel("Please type your name");
    JButton clickMe = new JButton("Click me");
    JTextField txtInput = new JTextField("");
    
    public static void main(String args[]){
        new HiUserListener();
    } // end main
    
    /**
     * Creates a new instance of HiUserListener
     */
    public HiUserListener() {
        super("Basic button press");
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        Container surface = this.getContentPane();
        surface.setLayout(new GridLayout(0,1));
        surface.add(lblOutput);
        surface.add(txtInput);
        surface.add(clickMe);
        clickMe.addActionListener(this);
        this.pack();
        this.setVisible(true);
    } // end constructor
    
    public void actionPerformed(ActionEvent e){
    	  System.out.println(e.getSource());
		  System.out.println(e.getActionCommand());
        System.out.println("I got clicked");
        String user = txtInput.getText();
        lblOutput.setText("Hi there, " + user + "!");
    } // end actionPerformed
}

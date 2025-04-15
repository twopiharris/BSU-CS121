//BorderDemo.java
//Demonstrates the Border Layout
//Andy Harris, 04/00

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;


public class BorderDemo extends JFrame implements ActionListener{

  //create the components
  JButton btnNorth = new JButton("North");
  JButton btnSouth = new JButton("South");
  JButton btnEast = new JButton("East");
  JButton btnWest = new JButton("West");
  JLabel lblOutput = new JLabel();
  
  public static void main(String[] args){
	  new BorderDemo();
  }
  
  public BorderDemo(){
    super("Border Demo");
    Container layout = this.getContentPane();      
    layout.setLayout(new BorderLayout());
    layout.add(btnNorth, BorderLayout.NORTH);
    layout.add(btnSouth, BorderLayout.SOUTH);
    layout.add(btnEast, BorderLayout.EAST);
    layout.add(btnWest, BorderLayout.WEST);
    layout.add(lblOutput, BorderLayout.CENTER);

    //register listeners
    btnNorth.addActionListener(this);
    btnSouth.addActionListener(this);
    btnEast.addActionListener(this);
    btnWest.addActionListener(this);

    //gussy up the output
    lblOutput.setHorizontalAlignment(JLabel.CENTER);
    lblOutput.setOpaque(true);
    lblOutput.setBackground(Color.yellow);
    this.setDefaultCloseOperation(BorderDemo.EXIT_ON_CLOSE);
    //this.pack();
    this.setSize(500, 400);
    this.setVisible(true);
  } // end constructor

  public void actionPerformed(ActionEvent e){
    String results = "You clicked on the ";
    results += e.getActionCommand();
    results += " button";
    lblOutput.setText(results);
  } // end actionPerformed
} // end BorderDemo

import java.awt.*;

import javax.swing.*;

import java.awt.event.*;

public class PanelDemo extends JFrame implements ActionListener{

	/**
	 * @param args
	 */
	
	// instance variables
	JButton btnOne = new JButton("One");
	JButton btnTwo = new JButton("Two");
	JButton btnThree = new JButton("Three");
	JButton btnFour = new JButton("Four");
	JLabel lblOutput = new JLabel("Please click a button");
	
	public static void main(String[] args) {
		new PanelDemo();
	} // end main
	
    public PanelDemo(){
    	super("Panel Demo");
    	Container pnlMain = this.getContentPane();
    	Panel pnlButtons = new Panel();
    	
    	//set up main panel
    	pnlMain.setLayout(new BorderLayout());
    	pnlMain.add(lblOutput, BorderLayout.CENTER);
    	lblOutput.setOpaque(true);
    	lblOutput.setBackground(Color.YELLOW);
    	lblOutput.setHorizontalAlignment(JLabel.CENTER);
    	lblOutput.setFont(new Font("SansSerif", Font.BOLD, 40));
    	pnlMain.add(pnlButtons, BorderLayout.SOUTH);
    	
    	//set up buttons panel
    	pnlButtons.setLayout(new FlowLayout());
    	pnlButtons.add(btnOne);
    	pnlButtons.add(btnTwo);
    	pnlButtons.add(btnThree);
    	pnlButtons.add(btnFour);
    	
    	//set up events
    	btnOne.addActionListener(this);
    	btnTwo.addActionListener(this);
    	btnThree.addActionListener(this);
    	btnFour.addActionListener(this);

    	//handle window
    	this.setDefaultCloseOperation(PanelDemo.EXIT_ON_CLOSE);
    	this.pack();
    	this.setSize(500, 400);
    	this.setVisible(true);
    	
    } // end constructor

    public void actionPerformed(ActionEvent e){
    	String output = "";
    	if (e.getSource() == btnOne){
    	  output = "Ichi";
    	} else if (e.getSource() == btnTwo){
      	  output = "Nii";
        } else if (e.getSource() == btnThree){
  	      output = "San";
        } else if (e.getSource() == btnFour){
	      output = "Shi";
	    } else {
	      output = "trouble...";
	      System.out.println(e.getActionCommand());
	    } // end if
	    lblOutput.setText(output);
    } // end actionPerformed
} // end class def


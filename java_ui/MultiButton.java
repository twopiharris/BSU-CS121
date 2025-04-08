/* multiButtons.java 
 * illustrate listening to multiple buttons 
 */

import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

class MultiButton extends JFrame implements ActionListener{
  
  JLabel lblOutput = new JLabel("Please Click a button");
  JButton btnOne = new JButton("one");
  JButton btnTwo = new JButton("two");
  JButton btnThree = new JButton("three");
  JButton btnFour = new JButton("four");
  
  public static void main(String args[]){
    new MultiButton();
  } // end main
  
  public MultiButton(){
    super("Multiple Button Events");
    init();
  } // end multi-button
  
  public void init(){
    //initializes screen
      Container mainPanel = this.getContentPane();
      mainPanel.setLayout(new GridLayout(0,1));

      mainPanel.add(lblOutput);
      mainPanel.add(btnOne);
      mainPanel.add(btnTwo);
      mainPanel.add(btnThree);
      mainPanel.add(btnFour);
      
      btnOne.addActionListener(this);
      btnTwo.addActionListener(this);
      btnThree.addActionListener(this);
      btnFour.addActionListener(this);
       
      this.setSize(200, 200);
      this.setVisible(true);
      this.setDefaultCloseOperation(this.EXIT_ON_CLOSE);

  } // end init
  
  public void actionPerformed(ActionEvent e){
	 
	Object theButton = e.getSource();
	if (theButton == btnOne){
		lblOutput.setText("Uno");
	}else if (theButton == btnTwo){
		lblOutput.setText("Dos");
	}else if (theButton == btnThree){
		lblOutput.setText("Tres");
	}else {
		lblOutput.setText("Quatro");
	} // end if
	
	
	/*
	//alternately, use action command, which is
	//caption of button or some other string set 
	//manually.  Two items can call same command
	 
    String command = e.getActionCommand();
    if (command.equals("one")){
        lblOutput.setText("ichi");
    } else if (command.equals("two")){
        lblOutput.setText("nii");
    } else if (command.equals("three")){
        lblOutput.setText("san");
    } else if (command.equals("four")){
        lblOutput.setText("shi");
    } else{
        lblOutput.setText("error");
    } // end if
     */
	  
	  
  } // end actionPerformed 
} // end class def       
      

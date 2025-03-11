import java.awt.*;
import java.awt.event.*;
import javax.swing.*;

public class AddLabel extends JFrame implements ActionListener{

  JButton btnAddLabel = new JButton("Add a Label");
  Container panel;
  
  public static void main(String[] args){
	  new AddLabel();
	 
  } // end main
  
  public AddLabel(){
	  panel = this.getContentPane();
	  panel.setLayout(new GridLayout(0,1));
	  panel.add(btnAddLabel);
	  btnAddLabel.addActionListener(this);
	  this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	  this.setVisible(true);
	  this.pack();
  }// end constructor
  
  public void actionPerformed(ActionEvent e){
	  System.out.println("I got here");
	  int numRooms = 3;	  
	  panel.add(new JLabel("hi there"));
	  this.pack();
	  HiPretty hp = new HiPretty();
	  hp.setVisible(true);
	  hp.pack();
  }// end actionPerformed
}

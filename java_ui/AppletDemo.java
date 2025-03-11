import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class AppletDemo extends JApplet implements ActionListener{
    // no main method needed in an applet!
	// no constructor needed (although it will work as normal)
	
	//init method called when applet first loads
	//put initialization code here
	
	//run as an applet.
	//See AppletDemo.html for embedding information
	
	JLabel lblOutput = new JLabel("Type your name and press the button");
	JTextField txtInput = new JTextField();
	JButton btnClickMe = new JButton("Click Me");
	
	public void init(){
		Container thePanel = this.getContentPane();
		thePanel.setLayout(new GridLayout(0,1));
		thePanel.add(lblOutput);
		thePanel.add(txtInput);
		thePanel.add(btnClickMe);
		
		btnClickMe.addActionListener(this);
		
	} // end init

	public void actionPerformed(ActionEvent e){
		String input = txtInput.getText();
		lblOutput.setText("Hi there, " + input + "!");
	} // end actionPerformed
} // end class def

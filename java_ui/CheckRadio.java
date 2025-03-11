import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class CheckRadio extends JFrame implements ActionListener{
    //demonstrates check boxes
    //and radio buttons
	
	JCheckBox chkCheese = new JCheckBox("Cheese");
	JCheckBox chkPepperoni = new JCheckBox("Pepperoni");
	
	JRadioButton rdoSmall = new JRadioButton("Small");
	JRadioButton rdoMed = new JRadioButton("Medium");
	JRadioButton rdoLarge = new JRadioButton("Large");
	ButtonGroup grpSize = new ButtonGroup();

	JButton btnOrder = new JButton("Order Pizza");
	
	Container pnlMain = this.getContentPane();
	
	
	
	public static void main(String[] args){
		new CheckRadio();
	} // end main
	
	public CheckRadio(){
		pnlMain.setLayout(new GridLayout(0,1));
		
		// add check boxes to page
		pnlMain.add(chkCheese);
		pnlMain.add(chkPepperoni);
		
		//add radio buttons to group
		grpSize.add(rdoSmall);
		grpSize.add(rdoMed);
		grpSize.add(rdoLarge);
		
		// add radio buttons to page
		pnlMain.add(rdoSmall);
		pnlMain.add(rdoMed);
		pnlMain.add(rdoLarge);

		//add button and register listener
		pnlMain.add(btnOrder);
		btnOrder.addActionListener(this);
		
		this.pack();
		this.setVisible(true);
		
		
	} // end constructor
	
    public void actionPerformed(ActionEvent e){
    	String size = "";
    	
    	// check the status of each checkBox
    	// more than one can be selected
    	if (chkCheese.isSelected()){
    		System.out.println("You ordered Cheese");
    	} // end if
    	
    	if (chkPepperoni.isSelected()){
    		System.out.println("You ordered Pepperoni");
    	} // end if
    	
    	
    	//check status of radio buttons
    	//only one can be selected
    	if (rdoSmall.isSelected()){
    		size = "small";
    	} else if (rdoMed.isSelected()){
    		size = "medium";
    	} else {
    		size = "large";
    	} // end if
    	
    	System.out.println("You ordered a " + size + " pizza");
    } // end actionPerformed

} // end class def


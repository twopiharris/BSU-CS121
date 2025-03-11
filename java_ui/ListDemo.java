import java.awt.*;
import javax.swing.*;
import java.awt.event.*;


public class ListDemo extends JFrame implements ActionListener{

	JLabel lblOutput = new JLabel();
	JList<String> lstColor = new JList<>(new String[] {"Red", "Yellow", "Blue"});
	JButton btnClickMe = new JButton("Click me");
	JComboBox<String> cboSize = new JComboBox<>(new String[] {"Small", "Medium", "Large"});
	JScrollBar scrValue = new JScrollBar(JScrollBar.HORIZONTAL);
	
	
	public static void main(String[] args) {
		new ListDemo();
	} // end main
	
	public ListDemo(){
		super("List and combo boxes");
		Container mainPanel = this.getContentPane();
		mainPanel.setLayout(new GridLayout(0,1));
		mainPanel.add(lstColor);
		mainPanel.add(cboSize);
		mainPanel.add(scrValue);
		mainPanel.add(btnClickMe);

		btnClickMe.addActionListener(this);
		cboSize.addActionListener(this);
		
		this.setSize(200,200);
		this.setVisible(true);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	} // end constructor

	public void actionPerformed(ActionEvent e){
		String color = (String)lstColor.getSelectedValue();
		System.out.print(color + " ");		
		
		String size = (String)cboSize.getSelectedItem();
		System.out.print(size + ":");
		
		int value = scrValue.getValue();
		System.out.println(value);
		
	} // end actionPerformed
} // end class def

import java.awt.*;
import javax.swing.*;
import java.awt.event.*;


public class ListDemoB extends JFrame implements ActionListener, AdjustmentListener{

	JLabel lblOutput = new JLabel();
	JList<String> lstColor = new JList<>(new String[] {"Red", "Yellow", "Blue"});
	JButton btnClickMe = new JButton("Click me");
	JComboBox<String> cboSize = new JComboBox<>(new String[] {"Small", "Medium", "Large"});
	JScrollBar scrValue = new JScrollBar(JScrollBar.HORIZONTAL);
	
	
	public static void main(String[] args) {
		new ListDemoB();
	} // end main
	
	public ListDemoB(){
		super("List and combo boxes");
		Container mainPanel = this.getContentPane();
		mainPanel.setLayout(new GridLayout(0,1));
		mainPanel.add(lstColor);
		mainPanel.add(cboSize);
		mainPanel.add(scrValue);
		mainPanel.add(lblOutput);
		mainPanel.add(btnClickMe);

		btnClickMe.addActionListener(this);
		cboSize.addActionListener(this);
		scrValue.addAdjustmentListener(this);
		
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
	
	public void adjustmentValueChanged(AdjustmentEvent e){
		int value = scrValue.getValue();
		lblOutput.setText(String.valueOf(value));
	}
} // end class def

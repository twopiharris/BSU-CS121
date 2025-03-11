import java.awt.Container;
import java.awt.FlowLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.JApplet;
import javax.swing.JButton;

public class PanelDemoApplet extends JApplet implements ActionListener{

	  public void init(){
	    JButton btnLaunch = new JButton("Launch Panel Demo");
	    Container pnlMain = this.getContentPane();
	    pnlMain.setLayout(new FlowLayout());
	    pnlMain.add(btnLaunch);
	    btnLaunch.addActionListener(this);
	  } // end init
	  
	  public void actionPerformed(ActionEvent e){
		  new PanelDemo();
	  } // end actionEvent

} // end PanelDemo class def

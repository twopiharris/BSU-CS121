	import javax.swing.*;
    import java.awt.*;
	
	@SuppressWarnings("serial")
	public class HiPretty extends JFrame{
	    

		public static void main(String args[]){
	        new HiPretty();
	    } // end main
	    
	    /** Creates a new instance of HelloSwing */
	    public HiPretty() {
	        super("My New Program");
	        this.setDefaultCloseOperation(HelloSwing.EXIT_ON_CLOSE);
	        
	        java.awt.Container surface = this.getContentPane();
	        
	        JLabel lblOutput = new JLabel("What up?!", SwingConstants.CENTER);
	        
	        lblOutput.setBackground(Color.YELLOW);
	        lblOutput.setForeground(Color.RED);
	        //lblOutput.setOpaque(true);
	        surface.setBackground(Color.GREEN);
	        
	        Font myFont = new Font("Serif", Font.ITALIC + Font.BOLD, 40);
	        lblOutput.setFont(myFont);
	        
	        surface.add(lblOutput);
	        
	        this.setSize(320, 240);
	        this.setVisible(true);
	    } // end constructor
	    
	} // end class def
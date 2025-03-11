import java.awt.*;
import javax.swing.*;
 
public class BoxLayoutDemo extends JFrame {
     
    public BoxLayoutDemo(){
         
        setTitle("Box Layout Example");
        setSize(200, 150);
        Container pnlMain = this.getContentPane();
        
        pnlMain.setLayout(
                new BoxLayout(pnlMain, BoxLayout.Y_AXIS));
         
        JButton btn1 = new JButton("Button 1");
        JButton btn2 = new JButton("Button 2");
        JButton btn3 = new JButton("Button 3");
        JButton btn4 = new JButton("Button 4");
        
        JPanel pnlSecond = new JPanel();
        
        pnlSecond.setLayout(new BoxLayout(pnlSecond, BoxLayout.X_AXIS));
        
        pnlMain.add(btn1);
        pnlMain.add(btn2);
        btn1.setAlignmentX(Component.CENTER_ALIGNMENT);
        
        pnlMain.add(pnlSecond);
        pnlSecond.add(btn3);
        pnlSecond.add(btn4);
    } // end constructor
    
    public static void main(String[] args) {
         
        BoxLayoutDemo ble = new BoxLayoutDemo();
        ble.setDefaultCloseOperation(WindowConstants.DISPOSE_ON_CLOSE);
        ble.setVisible(true);
         
    } // end main
} // end class def


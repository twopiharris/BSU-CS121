//demonstrate standard dialog boxes in Swing
import java.awt.*;

import javax.swing.*;

import java.awt.event.*;

public class Dialogs extends JFrame implements ActionListener{
        
    Container pnlMain = this.getContentPane();

    JButton btnInfo = new JButton("Information");
    JButton btnInput = new JButton("Input");
    JButton btnColor = new JButton("Color");
    JButton btnFile = new JButton("File");
    
    public static void main(String[] args){
        new Dialogs();
    }
  
    public Dialogs(){
        pnlMain.setLayout(new GridLayout(0,1));
        
        pnlMain.add(btnInfo);
        pnlMain.add(btnInput);
        pnlMain.add(btnColor);
        pnlMain.add(btnFile);
        
        btnInfo.addActionListener(this);
        btnInput.addActionListener(this);
        btnColor.addActionListener(this);
        btnFile.addActionListener(this);
        
        this.pack();
        this.setVisible(true);

        this.setDefaultCloseOperation(this.EXIT_ON_CLOSE);

    } // end constructor
    
    public void actionPerformed(ActionEvent e){
        if (e.getSource() == btnInfo){
            JOptionPane.showMessageDialog(pnlMain, 
                    "Here is some information",
                    "information",
                    JOptionPane.INFORMATION_MESSAGE);
        } else if (e.getSource() == btnInput){
            String name = JOptionPane.showInputDialog("What is your name?");
            JOptionPane.showMessageDialog(pnlMain, "Nice to meet you, " + name + "!");
        } else if (e.getSource() == btnColor){
            Color newColor = JColorChooser.showDialog(pnlMain, "title", Color.WHITE);
            pnlMain.setBackground(newColor);
        } else if (e.getSource() == btnFile){
            JFileChooser chooser = new JFileChooser();
            int returnVal = chooser.showOpenDialog(pnlMain);
            if (returnVal == JFileChooser.APPROVE_OPTION){
                java.io.File theFile = chooser.getSelectedFile();
                String fileName = theFile.getName();
                JOptionPane.showMessageDialog(pnlMain, "You chose " + fileName);                
            } // end 'return val' if
        } // end button if
    } // end actionPerformed
    
} // end class def


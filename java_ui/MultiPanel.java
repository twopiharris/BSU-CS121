import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

public class MultiPanel extends JFrame implements ActionListener{
    ThreeByTwo pnlA = new ThreeByTwo();
    TwoByThree pnlB = new TwoByThree();
    //Card layout is explicitly instantiated - unlike other layouts
    CardLayout cards = new CardLayout();
    JButton btnA = new JButton("Show panel A");
    JButton btnB = new JButton("Show panel B");
    JPanel pnlCenter = new JPanel();
    JPanel pnlSouth = new JPanel();

    public static void main(String[] args){
        new MultiPanel();
    } // end main

    public MultiPanel(){
        Container p = this.getContentPane();
        p.setLayout(new BorderLayout());

        // when components ar added to card layout
        // only one is visible at a time.
        // normally you add panels with multiple
        // components. Panels can also have own event
        // handlers
        // When you add a component with a card layout,
        // you must also provide a label used to
        // show that panel later.
        pnlCenter.setLayout(cards);
        pnlCenter.add(pnlA, "A");
        pnlCenter.add(pnlB, "B");
        //indicate which element should be shown on what container
        cards.show(pnlCenter, "A");

        p.add(pnlCenter, BorderLayout.CENTER);
        
        pnlSouth.setLayout(new FlowLayout());
        pnlSouth.add(btnA);
    pnlSouth.add(btnB);
        btnA.addActionListener(this);
        btnB.addActionListener(this);

        p.add(pnlSouth, BorderLayout.SOUTH);
        
        this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        this.pack();
        this.setVisible(true);
        
    }  // end constructor

    public void actionPerformed(ActionEvent e){
        if (e.getSource() == btnA){
            cards.show(pnlCenter, "A");
        } else if (e.getSource() == btnB){
            cards.show(pnlCenter, "B");
        } else {
            System.out.println("Something went wrong");
        } // end if
    } // end actionPerformed

} // end MultiPanel

class TwoByThree extends JPanel{
  // generally each 'page' is based on a JPanel
    // and can be a complete app with its own
    // event handlers and complex layout if you wish.
    
    public TwoByThree(){
        this.setLayout(new GridLayout(2,3));
        this.add(new Button("a button"));
        this.add(new Button("a button"));
        this.add(new Button("a button"));
        this.add(new Button("a button"));
        this.add(new Button("a button"));
        this.add(new Button("a button"));
    } // end constructor
} // end TwoByThree

class ThreeByTwo extends JPanel{

    public ThreeByTwo(){
        this.setLayout(new GridLayout(3,2));
        this.add(new Button("a button"));
        this.add(new Button("a button"));
        this.add(new Button("a button"));
        this.add(new Button("a button"));
        this.add(new Button("a button"));
        this.add(new Button("a button"));
    } // end constructor
} // end TwoByThree

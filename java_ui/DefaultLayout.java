//DefaultLayout
//Demonstrates the Flow Layout
//which is the default layout of the Applet class
//By Andy Harris, 4 / 00

import java.awt.*;
import java.applet.*;

public class DefaultLayout extends Applet{

  public void init(){
    addComponents();
  } // end init

  public void addComponents(){
    add(new Button(""));
    add(new Button("Short"));
    add(new Button("Medium size"));
    add(new Button("Really really long"));
    add(new Button("Short"));
    add(new Button("Short"));
  } // end makeButtons
} // end DefaultLayout
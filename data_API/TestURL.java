import java.awt.Desktop;
import java.net.URI;


// won't work on codespaces, but should be fine on local installation

public class TestURL {
  public static void main(String[] args){
    new TestURL();
  } // end main

  public TestURL(){
    try {
      URI uri = new URI("http://wttr.in/muncie");
      Desktop.getDesktop().browse(uri);
    } catch (Exception e){
      System.out.println(e.getMessage());
    } // end try
  } // end constructor
} // end class def


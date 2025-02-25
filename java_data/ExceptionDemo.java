import java.util.*;

public class ExceptionDemo{
    public static void main(String[] args){
	new ExceptionDemo();
    } // end main

    public ExceptionDemo(){
	int x = 0;
        int y = 1;
	int quotient = 0;

        try {
	  Scanner input = new Scanner(System.in);
          System.out.println("Please enter a number");
	  String strX = input.nextLine();
          x = Integer.parseInt(strX);
	  System.out.print("Another number: ");
          y = input.nextInt();
	  quotient = x / y;
        } catch (NumberFormatException e){
	    System.out.println("Dude. That's not a number...");
	} catch (Exception e){
	    System.out.println(e.getMessage());
        } // end try
        System.out.println("You said: " + x);

    } // end constructor
} // end class def

 

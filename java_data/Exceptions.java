//Exceptions.java

import java.util.*;

public class Exceptions{
  public static void main(String[] args){
    new Exceptions();
  } // end main
  
  public Exceptions(){
    int x = 1;
    int y = 1;
    int quotient = 1;
    Scanner input = new Scanner(System.in);
    boolean correct = false;
    while (!correct){
      try {
        correct = true;
        System.out.print("X: ");
        String xString = input.nextLine();
        x = Integer.parseInt(xString);
        System.out.print("Y: ");
        y = input.nextInt();
        quotient = x / y;
      } catch (NumberFormatException e){
        System.out.println("Could not convert to a number");
        System.out.println(e);
        correct = false;
      } catch (ArithmeticException e){
        System.out.println("You can't divide by zero...");
        correct = false;
      } catch (Exception e){
        System.out.println("Generic exception handler");
        System.out.println(e.getMessage());
        System.out.println(e);
        correct = false;
      } // end try
    } // end while
    
    System.out.println("x: " + x);
    System.out.println("y: " + y);
    System.out.println("Quotient: " + quotient);
    
  } // end constructor
} // end class def

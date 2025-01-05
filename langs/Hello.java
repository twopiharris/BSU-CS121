import java.util.*;

public class Hello {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);

    System.out.print("What is your name? ");
    String userName = input.nextLine();
    System.out.println("Hi " + userName + " from Java");
  } // end main

} // end class def

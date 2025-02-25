//Hello.java
//Basic "Hello World" in Java

import java.util.*;

public class Hello {
  public static void main(String[] args){
    Scanner input = new Scanner(System.in);
    System.out.print("Please enter your name: ");
    String userName = input.nextLine();
    System.out.println("Nice to meet you, " + userName);
  } // end Hello
} // end class def


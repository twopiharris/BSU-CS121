//HelloOOP
//OOP version of Hello

import java.util.*;

public class HelloOOP{
    public static void main(String[] args){
        //main simply creates an instance of the class
        new HelloOOP();
    } // end main
    
    public HelloOOP(){
        //constructor
        Scanner input = new Scanner(System.in);
        System.out.print("What is your name? ");
        String userName = input.nextLine();
        System.out.println("Hi there, " + userName + "!");
    } // end constructor
} // end class def

//Crypto.java

import java.util.Random;
import java.util.Scanner;

public class Crypto {
  // for now, key is hard-wired in.
  Scanner input = new Scanner(System.in);
  String alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  String key =   "UBWKOVGAPRFJLCQHZENSXDMYTI";
    
  public static void main(String[] args) {
    new Crypto();
  } // end main
  
  public Crypto(){
    boolean keepGoing = true;
    while(keepGoing){

      String response = menu();

        if (response.equals("1")){
          System.out.println("Please enter unencrypted phrase");
          String plain = input.nextLine();
          plain = plain.toUpperCase();
          System.out.print("Encoded message: ");
          System.out.println(encrypt(plain));

        } else if (response.equals("2")){
          System.out.println("Please enter encrypted phrase");
          String code = input.nextLine();
          code = code.toUpperCase();
          System.out.print("Decrypted message: ");
          System.out.println(decrypt(code));

        } else if (response.equals("0")){
          System.out.println("Goodbye!");
          keepGoing = false;

        } else {
          System.out.println("Sorry. I didn't understand");
        } // end if
      } // end while
   } // end constructor
   
   public String menu(){
     //prints a menu, returns a single character string 0, 1, or 2
     System.out.println("Select an option");
     System.out.println("0) Quit");
     System.out.println("1) Encrypt a phrase");
     System.out.println("2) Decrypt a phrase");
     String response = input.nextLine();
     return response;
   } // end menu
   
   public String encrypt(String plain){
     //given a plain string
     //reset result to empty
     String result = "";
     //go through string one letter at a time
     for (int charNum = 0; charNum < plain.length(); charNum++){
       //look at current character
       char currentChar = plain.charAt(charNum);
       //find position of current character in alpha
       int pos = alpha.indexOf(currentChar);
       //find character at corresponding pos in key
       if (pos != -1){
         //append that character to result
         char newChar = key.charAt(pos);
         result += newChar;
       } // end if
     } // end for
     //return result
     return result;
   } // end encrypt
   
   public String decrypt(String coded){
     //given a coded string
     //reset result to empty
     String result = "";
     //go through string one letter at a time
     for (int charNum = 0; charNum < coded.length(); charNum++){
       //look at current character
       char currentChar = coded.charAt(charNum);
       //find position of current character in key
       int pos = key.indexOf(currentChar);
       //find character at corresponding pos in alpha
       if (pos != -1){
         //append that character to result
         char newChar = alpha.charAt(pos);
         result += newChar;
       } // end if
     } // end for
     //return result
     return result;
   } // end decrypt
   
} // end Crypto

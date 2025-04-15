//  GetText.java
//  pull content from APIs using Java
//  can be reused for any open API
//  This version works fine with plain text results
//  Does not require a parser

import java.util.*;
import java.net.*;
import java.io.*;

public class GetText {
  public static void main(String[] args){
    new GetText();
  } // end main

  public GetText(){
    Scanner input = new Scanner(System.in);

    // replace this with whatever query you want
    String query = "https://binaryjazz.us/wp-json/genrenator/v1/genre";
    String result = readStringFromURL(query);
    System.out.println("Music genre of the day: " + result);

    result = readStringFromURL("https://wttr.in/Muncie?format=2&u");
    System.out.println("Today's weather in Muncie: " + result);

    System.out.print("Which city do you want weather for? ");
    String city = input.nextLine();
    result = readStringFromURL("https://wttr.in/" + city + "?format=2&u");
    System.out.println(result);

  } // end constructor

  public String readStringFromURL(String query){
    // adapted from 
    // https://alvinalexander.com/blog/post/java/how-open-read-url-java-url-class-example-code/

    // start with a blank String we will build up line by line
    String result = "";

    // networking is dangerous... An IOException handler is necessary
    try {
      // create a url object based on the query
      URL url = new URL(query);

      // create readers to simplify input
      InputStreamReader iReader = new InputStreamReader(url.openStream());
      BufferedReader reader = new BufferedReader(iReader);
    
      // step through input one line at a time
      String line;
      while ((line = reader.readLine()) != null){
        result += line + "\n";
      } // end while
      
      // close the readers
      reader.close();
      iReader.close();
    } catch (IOException e){
      // warn on exception
      System.out.println("something went wrong");
      System.out.println(e.getMessage());
    } // end try
    return result;
  } // end readString

} // end class def


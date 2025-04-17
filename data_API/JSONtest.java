//  JSONtest.java
//  pull content from newton using Java
//  can be reused for any open API
//  uses GSON library for parsing JSON
//  Compile: javac -cp gson-2.8.9.jar:. JSONtest.java
//  run: java -cp gson-2.8.9.jar:. JSONtest
//  note: on Windows, replace : with ; in compile and 
//  run commands.
//  or install jar file to local IDE

import java.util.*;
import java.net.*;
import java.io.*;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;

public class JSONtest {
  Response response;

  public static void main(String[] args){
    new JSONtest();
  } // end main

  public JSONtest(){
    // replace this with whatever query you want
    String expression = "(x+3)(x-2)"; 
    String query = "https://newton.vercel.app/api/v2/simplify/" + expression;
    String result = readStringFromURL(query);
    System.out.println(result);

    // call the JSON parser
    parseJSON(result);
    System.out.println(response);

  } // end constructor

  public String readStringFromURL(String query){
    // adapted from https://alvinalexander.com/blog/post/java/how-open-read-url-java-url-class-example-code/

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
    } // end try
    return result;
  } // end readString

  public void parseJSON(String jsonString){
    GsonBuilder builder = new GsonBuilder();

    Gson gson = builder.create();

    // you will need to build a custom class in the 
    // 'shape' of the data
    this.response = gson.fromJson(jsonString, Response.class);
  } // end parseJson


} // end main class def

// make a class containing top-level field names from JSON
// must be EXACT matches to JSON field names - choose appropriate data type
// data members can be protected (default)

class Response {
  String operation;
  String expression;
  String result;

  // consider overwriting toString to get better output
  public String toString(){
    String output = "";
    output += "Operation:  " + operation + "\n";
    output += "Expression: " + expression + "\n";
    output += "Result:     " + result;

    return output;
  } // end toString

  // you can then add any other class methods you want 
  // for more functionality

} // end class def


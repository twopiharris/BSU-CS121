//  APItest.java
//  pull content from opentdb using Java
//  can be reused for any open API
//  uses GSON library for parsing JSON
//  Compile: javac -cp gson-2.8.9.jar:. APItest.java
//  run: java -cp gson-2.8.9.jar:. APItest.java
//  note: on Windows, replace : with ; in compile and 
//  run commands.
//  or install jar file to local IDE

import java.util.*;
import java.net.*;
import java.io.*;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;

public class APItest {
  public static void main(String[] args){
    new APItest();
  } // end main

  public APItest(){
    // replace this with whatever query you want
    String query = "http://time.jsontest.com";
      String result = readStringFromURL(query);
      System.out.println(result);
      // call the JSON parser
      parseJSON(result);

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
    DateTime dt = gson.fromJson(jsonString, DateTime.class);
    System.out.println(dt);

 } // end parseJson


} // end main class def

class DateTime {
  // make a property for each element of 
  // the JSON with the appropriate name and type

  private String date;
  private long milliseconds_since_epoch;
  private String time;

  public DateTime(){
    this.date = "";
    this.milliseconds_since_epoch = 0L;
    this.time = "";
  } // end constructor

  // create standard setters and getters for each attribute
  public void setDate(String date){
    this.date = date;
  } // end setDate

  public String getDate(){
    return this.date;
  } // end getDate

  public void setMilliseconds_since_epoch(long milliseconds_since_epoch){
    this.milliseconds_since_epoch = milliseconds_since_epoch;
  } // end setMSE

  public long getMilliseconds_since_epoch(){
    return this.milliseconds_since_epoch;
  } // end getMSE

  public void setTime(String time){
    this.time = time;
  } // end setTime

  public String getTime(){
    return this.time;
  } // end getTime

  // overwrite toString for an easy-to-read output
  public String toString(){
    return ("Date: " + date + ", Time: " + time + ", Epoch: " + milliseconds_since_epoch);
  } // end toString

} // end class def


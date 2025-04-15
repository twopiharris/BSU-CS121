//  APItest.java
//  pull content from opentdb using Java
//  can be reused for any open API
//  uses GSON library for parsing JSON
//  Compile: javac -cp gson-2.8.9.jar:. APItest.java
//  run: java -cp gson-2.8.9.jar:. APItest
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
    String query = "https://opentdb.com/api.php?amount=10&category=18&type=multiple";
      String result = readStringFromURL(query);
      //System.out.println(result);
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
    QuestionList ql = gson.fromJson(jsonString, QuestionList.class);
    //DateTime dt = gson.fromJson(jsonString, DateTime.class);
    ql.printQuestions();
 } // end parseJson


} // end main class def

// make a class containing top level values in JSON

class QuestionList {
  public String response_code;
  public Question[] results = new Question[10];
  
  // add a method so we can print things out.
  public void printQuestions(){
    for (Question q: results){
      System.out.println(q);
    } // end for
  } // end printQuestions
} // end questionList def

// response also has a subclass, so make that too

class Question {
  public String type;
  public String difficulty;
  public String category;
  public String question;
  public String correct_answer;
  public String[] incorrect_answers = new String[3];

  // overwrite toString for convenience
  public String toString(){
    String result = "";
    result += question + "\n";
    result += correct_answer + "\n";
    for (String inc: incorrect_answers){
      result += inc + "\n";
    } // end for
    return result;
  } // end toString
} // end Question


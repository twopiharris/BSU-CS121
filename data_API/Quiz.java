//  Quiz.java
//  pull content from opentdb using Java
//  can be reused for any open API
//  uses GSON library for parsing JSON
//  Compile: javac -cp gson-2.8.9.jar:. Quiz.java
//  run: java -cp gson-2.8.9.jar:. Quiz
//  note: on Windows, replace : with ; in compile and 
//  run commands.
//  or install jar file to local IDE

import java.util.*;
import java.net.*;
import java.io.*;

import com.google.gson.Gson;
import com.google.gson.GsonBuilder;

public class Quiz {
  QuestionList ql;

  public static void main(String[] args){
    new Quiz();
  } // end main

  public Quiz(){
    // replace this with whatever query you want
    String query = "https://opentdb.com/api.php?amount=10&category=18&type=multiple";
    String result = readStringFromURL(query);
    //System.out.println(result);
    // call the JSON parser
    parseJSON(result);
   
    // pretty print results
    //this.ql.printQuestions();

    // take the quiz
    this.ql.takeQuiz();

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
   this.ql = gson.fromJson(jsonString, QuestionList.class);
 } // end parseJson


} // end main class def

// make a class containing top level values in JSON

class QuestionList {

  //String response_code;
  ArrayList<Question> results = new ArrayList<Question>();

  // add a method so we can print things out.
  public void printQuestions(){
    for (Question q: results){
      System.out.println(q);
    } // end for
  } // end printQuestions

  // add a method to take the quiz
  public void takeQuiz(){
    int score = 0;
    for (Question q: results){
      if(q.ask()){
        score++;
      } // end if
    } // end for
    System.out.println("You got " + score + "/10 correct");
  } // end takeQuiz

} // end questionList def

// response also has a subclass, so make that too

class Question {
  String type;
  String difficulty;
  String category;
  String question;
  String correct_answer;
  ArrayList<String> incorrect_answers = new ArrayList<String>();

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

  // create a method to ask a question
  public boolean ask(){
    Scanner input = new Scanner(System.in);
    boolean result = false;

    // build a shuffled arraylist with the possible answers
    ArrayList<String> answers = new ArrayList<String>();
    answers.add(correct_answer);
    for (String a: incorrect_answers){
      answers.add(a);
    } // end for
    Collections.shuffle(answers);

    System.out.println(question);

    for (int i = 0; i < answers.size(); i++){
      System.out.println("  " + i + ") " + answers.get(i));
    } // end for

    System.out.print("Your answer: ");
    
    // look for an input with exception handling
    int guess = 0;    
    try {
      guess = input.nextInt();
    } catch (Exception e){
      System.out.println("invalid input. Guessing 0");
      guess = 0;
    } // end try

    // check for correct answer
    if (answers.get(guess).equals(correct_answer)){
      result = true;
      System.out.println("Correct!");
    } else {
      System.out.println("Not correct");
      System.out.println("The correct answer was...");
      System.out.println(correct_answer);
    } // end if

    System.out.println();

    return result;
  } // end ask

} // end Question


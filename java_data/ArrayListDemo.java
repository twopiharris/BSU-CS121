import java.util.*;

public class ArrayListDemo{
  
  public static void main(String[] args){
    new ArrayListDemo();
  } // end main

  public ArrayListDemo(){
    
    // an arrayList is a generic (much like a C++ template)
    // it needs a data type.  Can be built in or a custom class
    ArrayList<String> classes = new ArrayList<String>();

    // It is dynamic length, so you can add as many elements as you want
    classes.add("CSCI 439 Game Engine Dev");
    classes.add("CSCI 200 CS Ethics"); 
    classes.add("CSCI 121 Advanced Programming");
    classes.add("CSCI 120 Intro to CS");

    // you can insert by including an index to the add
    classes.add(2, "CSCI 239");


    // you can use the get method to retrieve a certain element
    String theClass = classes.get(2);
    System.out.println(theClass);
    System.out.println();

    // make an iterator for easy traversal
    // Iterator is also generic. Use the same type
    Iterator<String> it = classes.iterator();

    // hasNext and next make looping through an arrayList very pleasant
    while (it.hasNext()){
      String currentClass = it.next();
      System.out.println(currentClass);
    } // end iterator
    
    System.out.println();
    System.out.println("Sorted version: ");

    // you can sort:
    // parameter is a comparator object. use null for built in comparison
    classes.sort(null);
    
    // re-print, this time with a foreach-style loop
    for (String currentClass: classes){
      System.out.println(currentClass);
    } // end while

  } // end constructor
} // end class def


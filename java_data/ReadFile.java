import java.util.*;
import java.io.*;

public class ReadFile {
  public static void main(String[] args){
	  new ReadFile();
  } // end main
  
  public ReadFile(){
	  try {
		  File theFile = new File("poem.txt");
		  Scanner input = new Scanner(theFile);
		  while (input.hasNext()){
			  System.out.println(input.nextLine() + ", dude!");
		  } // end while
	  	  input.close();
	  	  //theFile.close();
	 } catch (IOException e){
		  System.out.println(e.getMessage());
	  } // end try


  } // end constructor
} // end readFile

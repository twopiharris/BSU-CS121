import java.io.*;
import java.util.*;

public class SerialAList {

  ArrayList<Critter> critters = new ArrayList<Critter>();
  //CritterList critters = new CritterList();

  public static void main(String[] args) {
    new SerialAList();
  } // end main

  public SerialAList(){
    initCritters();
    saveCritters();
    loadCritters();
    showCritters();
  } // end constructor


  public void initCritters(){
    critters.add(new Critter("alpha", 1));
    critters.add(new Critter("baker", 2));
    critters.add(new Critter("charlie", 3));
    critters.add(new Critter("delta", 4));
    critters.add(new Critter("echo", 5));
  } // end initCritters

  public void saveCritters(){
    try {
      FileOutputStream fo = new FileOutputStream("critterArray.dat");
      ObjectOutputStream obOut = new ObjectOutputStream(fo);
      obOut.writeObject(critters);
    } catch (Exception e){
      System.out.println(e.getMessage());
    } // end try
  } // end saveCritters

  public void loadCritters(){
    try {
      FileInputStream fIn = new FileInputStream("critterArray.dat");
      ObjectInputStream obIn = new ObjectInputStream(fIn);
      critters = (ArrayList<Critter>)obIn.readObject();
      //critters = (CritterList)obIn.readObject();
      System.out.println(critters.get(0).name);
    }catch (Exception e){
      System.out.println(e.getMessage());
   } // end try
  } // end loadCritter

  public void showCritters(){
    System.out.println("In showCritters");
    for (Critter c: critters){
      String result = String.format("  %-10s %d", c.name, c.age);
      System.out.println(result);
    } // end for
  } // end showCritters

} // end class def

class Critter implements Serializable{
  String name;
  int age;
  long serialVersionUID = 1L;

  public Critter(String lName, int lAge){
    name = lName;
    age = lAge;
  } // end constructor
    
} // end class def

//class CritterList extends ArrayList<Critter> {};


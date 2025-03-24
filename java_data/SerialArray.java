import java.io.*;
public class SerialArray {

    // note that creating an array makes a new class
    // it does NOT instantiate the Critters
    public Critter[] critters = new Critter[5];
	
	public static void main(String[] args) {
		new SerialArray();
	} // end main
	
	public SerialArray(){
	    initCritters();
	    saveCritters();
	    loadCritters();	
	} // end constructor

	
    public void initCritters(){
	critters[0] = new Critter("alpha", 1);
	critters[1] = new Critter("baker", 2);
	critters[2] = new Critter("charlie", 3);
	critters[3] = new Critter("delta", 4);
	critters[4] = new Critter("echo", 5);
    } // end initCritters

    public void saveCritters(){
        // an array of Serializable elements is also serializable
	try {
	    FileOutputStream fo = new FileOutputStream("critterArray.dat");
	    ObjectOutputStream obOut = new ObjectOutputStream(fo);
	    obOut.writeObject(critters);
	} catch (Exception e){
	    System.out.println(e.getMessage());
	} // end try
    } // end saveCritter
	
    public void loadCritters(){
    	try {
	    FileInputStream fIn = new FileInputStream("critterArray.dat");
	    ObjectInputStream obIn = new ObjectInputStream(fIn);
	    critters = (Critter[])obIn.readObject();
	    System.out.println(critters[0].name);
    	}catch (Exception e){
	    System.out.println(e.getMessage());
    	} // end try
    } // end loadCritter

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

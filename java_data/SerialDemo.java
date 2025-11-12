import java.io.*;
public class SerialDemo {

	
	public static void main(String[] args) {
		new SerialDemo();
	} // end main
	
	public SerialDemo(){
		saveCritter();
		loadCritter();
		
	} // end constructor
	
	public void saveCritter(){
		Critter myCritter = new Critter("Lizzie Borden", 1);
		try {
			FileOutputStream fo = new FileOutputStream("SerialCritter.dat");
			ObjectOutputStream obOut = new ObjectOutputStream(fo);
			obOut.writeObject(myCritter);
      obOut.close();
      fo.close();
		} catch (Exception e){
			System.out.println(e.getMessage());
		} // end try
	} // end saveCritter

	
    public void loadCritter(){
    	Critter myCritter;
    	try {
    		FileInputStream fIn = new FileInputStream("SerialCritter.dat");
    		ObjectInputStream obIn = new ObjectInputStream(fIn);
    		myCritter = (Critter)obIn.readObject();
       	System.out.println(myCritter.name);
	      obIn.close();
		fIn.close();
    	}catch (Exception e){
    		System.out.println(e.getMessage());
    	} // end try

    } // end loadCritter

} // end class def

class Critter implements Serializable{
	// all instance variables must be serializable
	String name;
	int age;
	public static long serialVersionUID = 1L;
	
	public Critter(String lName, int lAge){
		name = lName;
		age = lAge;
	} // end constructor
} // end class def

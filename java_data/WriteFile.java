import java.io.*;
public class WriteFile{
	public static void main(String[] args){
		new WriteFile();
	} // end main
	
	public WriteFile(){
		try {
		    FileWriter outFile = new FileWriter("poem.txt", false);
		    PrintWriter output = new PrintWriter(outFile);
		    
		    output.println("Twas brillig and the slithy toves");
		    output.println("did gyre and gimbal in the wabe");
		    output.println("all mimsy were the borogrove");
		    output.println("and the mome wrath outgrabe");
		
                    outFile.close();
		    output.close();
		} catch (IOException e) {
			System.out.println(e.getMessage());
		} // end try
	} // end constructor
}// end class def

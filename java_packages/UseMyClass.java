//bring in a reference to the andyStuff package
import andyStuff.*;

public class UseMyClass{
    public static void main(String[] args){
        //instantiate with the fully qualified name:
        //andyStuff.MyClass mc1 = new andyStuff.MyClass(); 
	//If we used the import statement, we now have
	//access to this namespace
	MyClass mc2 = new MyClass();
        
    } // end main
} // end UseMyClass




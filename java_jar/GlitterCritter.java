
public class GlitterCritter extends Critter {

	protected int shininess = 100;

	public static void main(String[] args) {
		
		//Test harness
		
		//test default (inherited) constructor
		GlitterCritter gc = new GlitterCritter();
		
		//test overwritten sayHi() function
		gc.sayHi();
		gc.shine();
		/* EXPECTED OUTPUT
		 * anonymous gently shimmers
		 * I'm shiny
		 */
		
	} // end main
	
	@Override
        //over-write sayHi() method
	public void sayHi(){
                super.sayHi();
		System.out.println( this.name + " gently shimmers");
	} // end sayHi

	// add new method
        public void shine(){
		System.out.println("I'm shiny");
        } // end shine
} // end class def

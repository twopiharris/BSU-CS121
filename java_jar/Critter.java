
public class Critter {
	protected String name;
	
	public static void main(String[] args) {
		//test harness
		
		//test null param constructor
		Critter c = new Critter();
		
		//test methods
		c.sayHi();
		c.setName("George");
		c.sayHi();
		System.out.println(c.getName());
		
		//test single param constructor
		c = new Critter("Martha");
		c.sayHi();
		
		/*  EXPECTED OUTPUT:
		 * Hi, my name is anonymous
		 * Hi, my name is George
		 * George
		 * Hi, my name is Martha
		 */
		
	} // end main
	
	public Critter(){
		this.name = "anonymous";
	} // end constructor
	
	public Critter(String name){
		this.name = name;
	} // end constructor
	
	public void sayHi(){
		System.out.println("Hi, My name is " + this.name);
	} // end sayHi
	
	public void setName(String name){
		this.name = name;
	} // end setName
	
	public String getName(){
		return this.name;
	} // end getName
} // end class def

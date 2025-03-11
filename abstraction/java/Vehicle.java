public abstract class Vehicle {
  int numberOfWheels = 4;
 
  public Vehicle(){
    
  }

  public static void main(String[] args){
    System.out.println("Hi");
  } // 

  public abstract void steerLeft();
  public abstract void steerRight();

  public void speedUp(){
    System.out.println("VROOM!");
  } // end speedup

  public void slowDown(){
    System.out.println("SCREEEECH!");
  } // end slowDown

} // end Vehicle class


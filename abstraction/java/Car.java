/*Car.java Demonstrates inheritance and extension */

public class Car extends Vehicle implements GasPowered, Pickup{

  float gasTankSize = 12f;
  float gasAmount = 12f;
  Brand brand = Brand.FORD;

  public Car(){
    System.out.println("I'm a car...");
  } // end constructor

  // Since we have implemented GasPowered, we are
  // obligated to use its methods
  
  public void fillTank(){
    this.gasAmount = this.gasTankSize;
  } // end fillTank

  public float getGasAmount(){
    return this.gasAmount;
  } // end getGasAmount

  public void useGas(){
    if (this.gasAmount > 0.5f){
      this.gasAmount -= 0.5f;
    } else {
      System.out.println("Out of gas");
    } // end if
  } // end useGas

  // the Vehicle class has abstract methods which must
  // also be implemented
  
  public void steerLeft(){
    System.out.println("Going left");
  } // end steerLeft

  public void steerRight(){
    System.out.println("Going right");
  } // end steerRight


  // because I'm a pickup, I also need 
  // openTailgate() and closeTailgate()

  public void openTailgate(){
    System.out.println("The dog jumps out");
  } // end 

  public void closeTailgate(){
    System.out.println("Clunk!");
  } // end

  public static void main(String[] args){
    // I can have a main because I'm not abstract
    Car c = new Car();

    //I have access to methods inherited from Vehicle
    c.speedUp();
    c.slowDown();
    c.steerLeft();
    c.steerRight();

    //I also have access to my newly created methods
    System.out.println(c.getGasAmount());
    c.useGas();
    c.useGas();
    c.useGas();
    System.out.println(c.getGasAmount());
  } // end main




} // end 


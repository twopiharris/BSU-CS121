//critterOneFile.cpp
//illustrate how critter example could be written in one file

#include <string>
#include <iostream>

class Critter {
  private:
    std::string name;
  public:
    Critter(std::string name){
      Critter::name = name;
    } // end constructor

    Critter(){
      Critter::name = "anonymous";
    } // end null parameter constructor

    void setName(std::string name){
      Critter::name = name;
    } // end setName

    std::string getName(){
      return name;
    } // end getName

    void sayHi(){
      std::cout << "Hi, my name is " << name << "." << std::endl;
    } // end sayHi

}; // end critter class def

class Car {
  private:
    Critter driver;
 
  public:
    Car(){
      // add a default critter
      Car::driver = Critter();
    } // end null parameter constructor

    void setDriver(Critter driver){
      Car::driver = driver;
    } // end setDriver

    Critter getDriver(){
      return driver;
    } // end getDriver

    std::string getDriverName(){
      return driver.getName();
    } // end getDriverName

}; // end car class def

int main(){
  /* expected output:

  critter: George
  critter d: Harold
  Hi, my name is Harold
  driver: George
  */


  //testing no parameter constructor
  Critter c;
  c.setName("George");
  std::cout << "critter: " << c.getName() << std::endl;
  //testing single parameter constructor
  Critter d = Critter("Harold");
  std::cout << "critter d: " << d.getName() << std::endl;

  d.sayHi();

  //creating a car
  Car theCar;
  theCar.setDriver(c);
  std::cout << "driver: " << theCar.getDriverName() << std::endl;

} // end main


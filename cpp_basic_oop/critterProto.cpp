//critterProto.cpp
//separating code from prototypes in a single file

#include <string>
#include <iostream>
//using namespace std;

//prototypes defined here. Note, no actual code, just protos

class Critter {
  private:
    std::string name;
  public:
    Critter();
    Critter(std::string name);
    void setName(std::string name);
    std::string getName();
}; // end critter class def

class Car {
  private:
    Critter driver;
  public:
    Car();
    void setDriver(Critter driver);
    std::string getDriverName();
}; // end car class def


// implement code here
// note we're no longer in class definition
// so we need to include class identifiers in function
// names to clarify they are actually methods of a class
//

Critter::Critter(){
  Critter::name = "Anonymous";
} // end null parameter constructor

Critter::Critter(std::string name){
  Critter::name = name;
} // end constructor

void Critter::setName(std::string name){
  Critter::name = name;
} // end setName

std::string Critter::getName(){
  return name;
} // end getName


Car::Car(){
  Car::driver = Critter();
} // end constructor

void Car::setDriver(Critter driver){
  Car::driver = driver;
} // end setDriver

std::string Car::getDriverName(){
  return driver.getName();
} // end getDriver

//main code
int main(){

  Critter c;
  c.setName("George");
  std::cout << "critter: " << c.getName() << std::endl;

  Car theCar;
  theCar.setDriver(c);
  std::cout << "driver: " << theCar.getDriverName() << std::endl;
} // end main

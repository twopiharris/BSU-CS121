#include <iostream>
#include "critter.h"
#include "car.h"


int main(){
  std::cout << "Hi there!" << std::endl;
  Critter c;
  std::string myCritterName = "Emmert";
  c.setName(myCritterName);
  std::cout << c.getName() << std::endl;

  Car theCar;
  theCar.setDriver(c);
  std::cout << "driver: " << theCar.getDriverName() << std::endl;
} // end main


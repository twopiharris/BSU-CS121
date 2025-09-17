//car.cpp

#include <string>
#include "critter.h"
#include "car.h"

Car::Car(){
  //add a default critter
  Car::driver = Critter();
} // end constructor

void Car::setDriver(Critter driver){
  Car::driver = driver;
} // end setDriver

std::string Car::getDriverName(){
  return driver.getName();
} // end getDriver



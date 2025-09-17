//critter.cpp
#include <string>
#include <iostream>
#include "critter.h"

Critter::Critter(){
  Critter::name = "anonymous";
} // end constructor

void Critter::setName(std::string name){
  Critter::name = name;
} //end setName

std::string Critter::getName(){
  return name;
} // end getName


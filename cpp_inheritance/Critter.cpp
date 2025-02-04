#include <string>
#include <iostream>

#include "Critter.h"

//using namespace std;

//Constructor and greet are defined for Critter
Critter::Critter(){
  Critter::name = "anonymous";
} // end constructor

Critter::Critter(std::string name){
  Critter::name = name;
}

void Critter::greet(){
  std::cout << "My name is " << Critter::name << std::endl;
} // end greet

/*
int main(){

  std::cout << "main class: ";
  Critter c;
  c.greet();

  return 0;
}
*/

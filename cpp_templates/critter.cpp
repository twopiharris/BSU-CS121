#include <iostream>
#include "critter.h"


Critter::Critter(){
  Critter::name = "";
  Critter::age = 0;
} 

void Critter::populate(std::string name, int age){
  Critter::name = name;
  Critter::age = age;
} 

std::string Critter::getName(){
  return name;
}

void Critter::setName(std::string name){
  Critter::name = name;
}

int Critter::getAge(){
  return age;
} 

void Critter::setAge(int age){
  Critter::age = age;
}

void Critter::greet(){
  std::cout << name << ": " << age << std::endl;
}


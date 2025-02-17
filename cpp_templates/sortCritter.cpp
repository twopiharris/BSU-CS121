#include <algorithm>
#include <iostream>
#include "critter.h"

void printArray(Critter* c, int length);

bool sortByName(Critter& a, Critter& b);
bool sortByAge(Critter& a, Critter& b);

const int NUM_CRITTERS = 3;
int main(){
  Critter* c = new Critter[NUM_CRITTERS];
  c[0].populate("Baker", 1);
  c[1].populate("Alpha", 3);
  c[2].populate("Charlie", 2);

  printArray(c, NUM_CRITTERS);

  std::cout << std::endl << "sorted by name: " << std::endl;
  std::sort(c, c + NUM_CRITTERS, sortByName);
  printArray(c, NUM_CRITTERS);

  std::cout << std::endl << "sorted by age: " << std::endl;
  std::sort(c, c + NUM_CRITTERS, sortByAge);
  printArray(c, NUM_CRITTERS);

  delete[] c;
}

bool sortByName(Critter& a, Critter& b){
  return(a.getName() < b.getName());
}

bool sortByAge(Critter& a, Critter& b){
  return(a.getAge() < b.getAge());
}

void printArray(Critter* c, int length){
  for (int i = 0; i < length; i++){
    std::cout << c[i].getName() << ": " << c[i].getAge() << std::endl;
  } // end for
} 


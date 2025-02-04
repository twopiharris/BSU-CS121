#include <string>
#include <iostream>

//using namespace std;

//CopyCritter
class Critter{
  protected:
    std::string name;
  public:
    Critter(std::string name = "anonymous");
    void greet();
}; // end Critter def

//note that BitterCritter is derived from Critter
class BitterCritter: public Critter{
  public:
    void greet();
};

//Constructor and greet are defined for Critter
Critter::Critter(std::string name){
  Critter::name = name;
};

void Critter::greet(){
  std::cout << "My name is " << name << "." << std::endl;
} // end greet

void BitterCritter::greet(){
  //use scope res operator (::) to access parent members
  Critter::greet();
  std::cout << "...as if you care..." << std::endl;
}

int main(){

  std::cout << "main class: ";
  Critter c;
  c.greet();


//BitterCritter
  std::cout << "derived class: ";
  BitterCritter bc;
  bc.greet();

  return 0;
}


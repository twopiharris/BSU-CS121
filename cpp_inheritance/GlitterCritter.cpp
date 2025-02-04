#include <string>
#include <iostream>

//using namespace std;

//GlitterCritter
class Critter{
  protected:
    std::string name;
  public:
    Critter(std::string name = "anonymous");
    void greet();
}; // end Critter def

//Add a reference to any methods you want to extend
class GlitterCritter: public Critter{
  public:
    void greet();
};

Critter::Critter(std::string name){
  Critter::name = name;
};

void Critter::greet(){
  std::cout << "My name is " << name << "." << std::endl;
} // end greet

//overwrite the greet method to have new behavior
void GlitterCritter::greet(){
  std::cout << name << " gently shimmers..." << std::endl;
}

int main(){
  Critter c;
  c.greet();

  GlitterCritter gc;
  gc.greet();

  //you can cast a subclass as its parent...
  Critter third = (Critter)gc;
  third.greet();

  //you can't go the other way safely...
  //GlitterCritter fourth = (GlitterCritter)c;
  //fourth.greet();

  return 0;
}


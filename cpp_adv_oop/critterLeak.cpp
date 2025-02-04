//Critter with constructor and destructor

// NOTE:  THIS PROGRAM HAS A DELIBERATE MEMORY LEAK
// it is intended as a test for valgrind

#include <iostream>
#include <cstring>

class Critter {
  private:
    std::string *name;
  public:
    Critter();
    Critter(std::string name);
    ~Critter();
    void setName(std::string name);
    std::string getName();
}; // end class def

Critter::Critter(){
  Critter::name = new std::string("anonymous");
}

Critter::Critter(std::string name){
  Critter::name = new std::string(name);
}

Critter::~Critter(){
  std::cout << "I confess I breathe my last..." << std::endl;
  // OOPS! I FORGOT TO DELETE THE NAME!
  //delete name;
}

void Critter::setName(std::string name){
  *Critter::name = name;
}

std::string Critter::getName(){
  return *name;
}

int main(){
  //build a single Critter on heap
  Critter* c = new Critter();

  c->setName("George");
  std::cout << c->getName() << std::endl;

  // or maybe I forgot to delete an instance I created in a function
  delete(c);

  // critter array is built on heap
  Critter *cA = new Critter[3];
  
  delete[] cA;
}




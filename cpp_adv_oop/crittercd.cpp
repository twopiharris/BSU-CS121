//Critter with constructor and destructor
#include <iostream>
#include <string>

class Critter {
  private:
    std::string* name;
  public:
    Critter();
    Critter(std::string name);
    ~Critter();
    void init(std::string name);
    void setName(std::string name);
    std::string getName();
}; // end class def

Critter::Critter(){
  //new operator creates variables on the heap
  Critter::name = new std::string("anonymous");
}

Critter::Critter(std::string name){
  Critter::setName(name);
}

Critter::~Critter(){
  //destructor is called when class is deleted
  std::cout << *name << " confesses I breathe my last..." << std::endl;
  //name is on heap, so it should be deleted
  delete name;
}

void Critter::init(std::string name){
  Critter::setName(name);
}

void Critter::setName(std::string name){
  *Critter::name = name;
}

std::string Critter::getName(){
  return *Critter::name;
}

int main(){
  //build a single Critter on heap
  Critter* c = new Critter();

  // c is a critter POINTER on the stack
  // pointing to the critter data on the heap
  // use -> to use methods of pointed class
  // without explicit dereferencing
  c->setName("George");
  std::cout << c->getName() << std::endl;

  // delete the heap data
  delete(c);

  // pointer will be destroyed when function goes
  // out of scope

  int numCritters = 3;

  //critter array is built on heap
  Critter* cA = new Critter[numCritters];

  std::string names[] = {"zero", "one", "two"};
  
  // you can use an initializer as a secondary constructor
  for (int i = 0; i < 3; i++){
    // array elements are not pointers, don't need to be dereferenced.
    cA[i].init(names[i]);
  } // end for


//delete critter array.
  delete[] cA;
}

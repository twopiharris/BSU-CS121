//Critter with constructor and destructor
#include <iostream>
#include <cstring>

class Critter {
  private:
    // name is NOT a string, but a pointer to a string
    std::string* name;
  public:
    Critter();
    Critter(std::string name);
    ~Critter();
    void setName(std::string name);
    std::string getName();
}; // end class def

Critter::Critter(){
  // new operator creates variables on the heap
  // string is actually an object, and you can feed
  // a value to its constructor
  Critter::name = new std::string("anonymous");
}

Critter::Critter(std::string name){
  Critter::name = new std::string(name);
}

Critter::~Critter(){
  //destructor is called when class is deleted
  std::cout << "I confess I breathe my last..." << std::endl;
  //name is on heap, so it should be deleted
  delete name;
  // you aren't deleting the pointer 'name',
  // but the heap data that 'name' is pointing to
}

void Critter::setName(std::string name){
  // name is a pointer, so set its value to the parameter
  *Critter::name = name;
  //this->name = name;

  // the pointer (Critter::name) remains on stack, 
  // but it points to data on the heap
}

std::string Critter::getName(){
  // name is a pointer, so we need to return
  // value at the name
  return *name;
}

int main(){
  //build a single Critter on heap
  Critter* c = new Critter();

  // c is a critter POINTER on the stack
  // pointing to the critter data on the heap
  // use -> to use methods of pointed class
  // without explicit dereferencing

  //this is illegal: c.setName("George");

  //this is fine, but awkward
  //(*c).setName("George");

  c->setName("George");
  std::cout << c->getName() << std::endl;

  // delete the heap data
  delete(c);

  // pointer will be destroyed when function goes
  // out of scope
  // critter array is built on heap
  Critter* cA = new Critter[3];
  
  // arrays of objects use their no-parameter constructor
  // that's why a C++ object must have such a thing

  // delete critter array.
  // note syntax for deleting an array is different 
  // than for a single element 
  // (because the array is a pointer to an array of pointers)
  delete[] cA;

}


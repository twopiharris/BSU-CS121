//shallowHeap

//If a class uses heap variables,
//the default shallow copy may not be sufficient.

#include <iostream>


class Critter{ // standard class w/out copy constructor
  private:
    //name is dynamic length, so it must be created on heap
    std::string* name;
  public:
    Critter(){
      //since name is defined on heap, size can be determined
      //at run-time
      name = new std::string();
      *name = "Fred";
    } // end constructor

    //no explicit copy constructor built;
    //still using default shallow copy constructor

    ~Critter(){
      //we now have a heap variable, so we must explicitly delete it
      delete name;
    } // end destructor

    void setName(std::string name){
      *Critter::name = name;
    } // end setName

    void greet(){
      std::cout << "My name is " << *name << std::endl;
    } // end greet
}; // end Critter class def

int main(){
  //instantiate A
  Critter a;
  std::cout << "A's name should be Fred" << std::endl;
  a.greet();

  //shallow copies seem to work fine with heap variables too...
  Critter b = a;
  std::cout << "Since b is a copy, it will also be Fred" << std::endl;
  b.greet();

  //but when we change the name of a...
  a.setName("George");
  std::cout << "A's name should now be George" << std::endl;
  a.greet();
  //...the name of anotherA changes too! 
  std::cout << "b's name should NOT be George" << std::endl;
  b.greet();
  return 0;
} // end main

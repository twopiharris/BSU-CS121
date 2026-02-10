//shallowCopy.cpp

#include <iostream>

class Critter{ // standard class w/out copy constructor
  private:
    //name is created on stack
    std::string name;
  public:
    Critter(){
      name = "Fred";
    } // end constructor

    ~Critter(){
      //no special destructor needed; no heap variables
    } // end destructor

    void setName(std::string name){
      Critter::name =  name;
    } // end setName

    void greet(){
      std::cout << "my name is " << name << std::endl;
    } // end greet

}; // end Critter class def

int main(){
  std::cout << "Expecting Fred, Fred, George, Fred " << std::endl;
  //instantiate Critter
  Critter a;
  a.greet();

  //When you assign to a new variable, you actually make a copy
  //This calls the (default) copy constructor
  //which simply copies the values of all member variables
  //The default copy mechanism is a shallow copy.
  //It copies all stack member variables, but does not
  //guarantee copies of heap variables.
  Critter b = a;
  b.greet();

  //as long as you're using only the stack, things work as expected
  //change the name of a...
  a.setName("George");
  a.greet();
  //...and b keeps its own name
  b.greet();
  return 0;
} // end main

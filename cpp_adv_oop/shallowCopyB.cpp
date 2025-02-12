//shallowCopy.cpp

#include <iostream>

class A{ // standard class w/out copy constructor
  private:
    //name is created on stack
    std::string name;
  public:
    A(){
      name = "Fred";
    } // end constructor

    ~A(){
      //no special destructor needed; no heap variables
    } // end destructor

    void setName(std::string name){
      A::name =  name;
    } // end setName

    void greet(){
      std::cout << "my name is " << name << std::endl;
    } // end greet

}; // end A class def

int main(){
  std::cout << "Expecting Fred, Fred, George, Fred " << std::endl;
  //instantiate A
  A a;
  a.greet();

  //When you assign to a new variable, you actually make a copy
  //This calls the (default) copy constructor
  //which simply copies the values of all member variables
  //The default copy mechanism is a shallow copy.
  //It copies all stack member variables, but does not
  //guarantee copies of heap variables.
  A anotherA = a;
  anotherA.greet();

  //as long as you're using only the stack, things work as expected
  //change the name of a...
  a.setName("George");
  a.greet();
  //...and anotherA keeps its own name
  anotherA.greet();
  return 0;
} // end main

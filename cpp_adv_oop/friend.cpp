//friend.cpp

#include <string>
#include <iostream>

void changeName();
class Critter {
  //note there is no intrinsic way to change the name
  //this is a horrible design, but stick with me for
  //the example

  //changeName is NOT a member function
  //I'm just declaring it should have access to this class
  friend void changeName();

  private:
    std::string name;
  public:
    Critter();
    void printName();
}; // end class def

Critter::Critter(){
  name = "Anonymous";
}

void Critter::printName(){
  std::cout << "My name is " << name << "." << std::endl;
}

//changeName is NOT a member function!
void changeName(){
  //Declare an instance of the class I'm a friend of
  Critter c;

  //because changeName is a friend function, it can access
  //private instance variables
  c.name = "Inego Montoya";
  c.printName();
}

int main(){
  changeName();

  return 0;
} // end main

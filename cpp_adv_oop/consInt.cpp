//consInit.cpp
//constructor initializer example

#include <string>
#include <iostream>

//using namespace std;

class Critter {
  private:
    std::string name;
  public:
    //constructors normally initialize instance variables
    //this shortcut allows you to simply make a list of
    //variables and pass parameters directly to them
    //parameters can be classes or primitive types
    Critter(std::string l_name):name(l_name){}
    void greet(){
      std::cout << "My name is " << name << "." << std::endl;
    } // end greet

}; // end class def

int main(){
  Critter c("Inigo Montoya");
  c.greet();
}


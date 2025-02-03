#include <iostream>

//defining the struct does not initialize it
struct Critter {
  std::string name;
  int age;
};


int main(){
  // when you instantiate the struct, it's not clear what the element values will be
  Critter c;
  
  std::cout << "Hi. My name is " << c.name << " and I am " << c.age << " years old." << std::endl;

  // you have to initialize each element separately
  c.name = "Floofie";
  c.age = 5;
  std::cout << "Hi. My name is " << c.name << " and I am " << c.age << " years old." << std::endl;

  // it's possible to send garbage values to the elements
  c.name = 6;
  c.age = -100;
  std::cout << "Hi. My name is " << c.name << " and I am " << c.age << " years old." << std::endl;

  // if I want a 'fancier' critter with more features, I have to start over....

  return 0;
} // end main



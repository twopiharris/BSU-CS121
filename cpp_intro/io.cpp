//io.cpp

#include <iostream>

int main(){
  int number;
  float real;
  std::string name;

  std::cout << "Please enter a number: " ;
  std::cin >> number;
  std::cout << "You said " << number << std::endl;

  std::cout << "Please enter a float: ";
  std::cin >> real;
  std::cout << "Your float is " << real << std::endl;

  std::cout << "Please type your name: ";
  std::cin >> name;
  std::cout << "Hi there, " << name << "!" << std::endl;

  
  std::cout << "Please enter your full name: ";
  //standard cin grabs only one string!
  //to get full line, clear buffer:
  std::cin.ignore();
  //then use the getline function
  getline(std::cin, name);
  std::cout << "Hi there, " << name << "!" << std::endl;

  std::cout << "Press ENTER to continue";
  std::cin.ignore();

  return 0;
}

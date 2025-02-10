//istream.cpp
//istream special functions

#include <iostream>
#include <string>

int main(){
  std::cout << "Get a single character: ";
  char c;
  std::cin.get(c);
  std::cout << "Your character: " << c << std::endl;

  std::string goofy;
  std::cin >> goofy;

  std::cout << "Get a line at a time: " << std::endl;

  std::cout << goofy << std::endl;

  //clean out cin to remove previous values...
  //discard up to 80 characters or newline
  //cin.ignore(80, '\n');
  std::cin.ignore();

  std::cout << "Please enter your full name: ";

  std::string fullName;
  getline(std::cin, fullName);

  std::cout << "Hi there, " << fullName << std::endl;

  std::cout << "Press enter to continue: " << std::endl;
  std::cin.ignore();



  return 0;

} // end main


//istream.cpp
//istream special functions

#include <iostream>
#include <string>

int main(){
  std::cout << "Get a single character: ";
  char c;
  cin.get(c);
  std::cout << "Your character: " << c << std::endl;

  string goofy;
  cin >> goofy;

  std::cout << "Get a line at a time: " << std::endl;

  std::cout << goofy << std::endl;

  //clean out cin to remove previous values...
  //discard up to 80 characters or newline
  //cin.ignore(80, '\n');
  cin.ignore();

  std::cout << "Please enter your full name: ";

  string fullName;
  getline(cin, fullName);

  std::cout << "Hi there, " << fullName << std::endl;

  std::cout << "Press enter to continue: " << std::endl;
  cin.ignore();



  return 0;

} // end main


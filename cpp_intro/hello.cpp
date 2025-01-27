#include <iostream>

int main(){
  std::string userName;

  std::cout << "Hi. Please enter your name. ";
  std::cin >> userName;

  std::cout << "Hello " << userName << ". Nice to meet you. " << std::endl;

  return 0;
}  // end main


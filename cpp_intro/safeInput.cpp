#include <iostream>

float getFloat(std::string prompt);
int getInt(std::string prompt);

int main(){
  int a = getInt("please give me a number ");
  std::cout << "You said " << a << std::endl;
  float b = getFloat("another number? ");
  std::cout << "You said " << b << std::endl;

  return 0;
} // end main

float getFloat(std::string prompt){
  bool keepGoing = true;
  float result;
  while (keepGoing){
    std::cout << prompt;
    std::cin >> result;
    if (std::cin.fail()){
      std::cin.clear();
      std::cin.ignore(256, '\n');
      keepGoing = true;
    } else {
      keepGoing = false;
    } // end if
  } // end while
  return result;
} // end getInt

int getInt(std::string prompt){
  bool keepGoing = true;
  int result;
  float temp;
  while (keepGoing){
    std::cout << prompt;
    std::cin >> temp;
    if (std::cin.fail()){
      std::cin.clear();
      std::cin.ignore(256, '\n');
      keepGoing = true;
    } else {
      result = (int)temp;
      keepGoing = false;
    } // end if
  } // end while
  return result;
} // end getInt



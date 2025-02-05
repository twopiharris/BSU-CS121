//streamManipulators.cpp
#include <iostream>


int main(){
  //change the the base of an integer
  //uses oct, hex, or dec
  int n = 15;
  std::cout << std::hex << n << std::endl;

  //managing precision
  double pi = 3.1415927;
  std::cout.precision(4);
  std::cout << pi << std::endl;

  //managing width;
  //used in loops to create tabular output
  std::cout.width(6);
  std::cout << "Bill";
  std::cout.width(10);
  std::cout << "Gates" << std::endl;

  //use flags to modify output
  std::cout.setf( std::ios::left );
  std::cout.width(6);
  std::cout << "Bill";
  std::cout.width(10);
  std::cout << "Gates" << std::endl;



  return 0;
} // end main

//stringstream demo

#include <iostream>
#include <sstream>

int main(){
  //"adding" string and numeric values doesn't work...
  //string phrase = "I am " + 28 + " years old";
  //std::cout << phrase << std::endl;

  std::cout << "I am " << 28 << " years old" << std::endl; 
  std::string text;
  int number;

  //a stringstream object treats a string like a stream
  std::stringstream ss;
  ss << "I am " << 28 << " years old" << std::endl;

  //use the str() method to get the data out of the stream
  std::cout << ss.str();

  //you can get values back!

  ss >> text;
  std::cout << text << std::endl;

  ss >> text;
  std::cout << text << std::endl;

  // you can also insert data into a numeric type if 
  // you know it will fit
  ss >> number;
  std::cout << number << std::endl;

  //next input is not a number and will return
  //a zero
  ss >> number;
  std::cout << number << std::endl;

  return 0;
} // end main


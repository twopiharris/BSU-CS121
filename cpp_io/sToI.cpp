#include <fstream>
#include <iostream>
#include <sstream>

// numString.dat is known to contain a number and 
// a string on each line

int main(){
  std::ifstream inFile;
  std::string currentLine;
  std::stringstream ss;
  int counter;
  std::string text;

  inFile.open("numString.dat");
  while (getline(inFile, currentLine)){

    std::cout << currentLine << std::endl;
    //clear the stringstream
    ss.clear();
    ss.str(currentLine);

    // this time copy data into a string
    // and use stoi to convert to int
    ss >> text;
    counter = std::stoi(text);

    ss >> text;

    std::cout << counter * 10 << " " << text;    

  } // end while
  inFile.close();
} // end main

  

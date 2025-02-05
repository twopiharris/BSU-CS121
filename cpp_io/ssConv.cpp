#include <fstream>
#include <iostream>
#include <sstream>

// numString.dat is known to contain a number and 
// a string on each line

int main(){
  std::ifstream inFile;
  std::string currentLine;
  std::stringstream converter;
  int counter;
  std::string text;

  inFile.open("numString.dat");
  while (getline(inFile, currentLine)){
    std::cout << currentLine << std::endl;
    //clear the stringstream
    converter.clear();
    converter.str("");

    //pass this line into stringstream
    converter << currentLine;
    
    //send stuff back to variables;
    //type conversion is automatic if possible!
    converter >> counter >> text;
    std::cout << counter * 10 << " " << text << std::endl;

  } // end while
  inFile.close();
} // end main

  

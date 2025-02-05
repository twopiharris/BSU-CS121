#include <fstream>
#include <iostream>
#include <sstream>


// numString.csv is known to contain a number and 
// a string on each line separated by a comma

int main(){
  std::ifstream inFile;
  std::string currentLine;
  std::stringstream converter;
  std::stringstream ss;
  int counter;
  std::string sCounter;
  std::string text;

  inFile.open("numString.csv");
  while (getline(inFile, currentLine)){
    //temporary stream for parsing commas

    //clear the stringstreams
    ss.clear();
    ss.str("");
    converter.clear();
    converter.str("");

    //load variables into ss stream
    ss.str(currentLine);

    //read counter as a string
    //specifying a comma delimiter
    getline(ss, sCounter, ',');

    //read text, newline is default delimiter
    getline(ss, text);

    // only counter needs to be converted, so send it
    // to converter stream
    converter << sCounter;
    
    //send contents of converter back to integer
    //type conversion is automatic if possible!
    converter >> counter;
    std::cout << counter * 10 << " " << text << std::endl;

  } // end while
  inFile.close();
} // end main

  

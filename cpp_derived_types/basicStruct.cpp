//basicStruct.cpp

// structs are like simple classes
// or python dictionaries
// only public members
// can have different types
// all members have names
// available in C and C++

#include <iostream>
#include <string>

struct date{
  int day;
  std::string month;
  int year;
};

int main(){
    date today;
    today.day = 2;

    today.month = "Sep";
    today.year = 2010;

    //std::cout << today;

    std::cout << "Day: " << today.day
         << ", Month: " << today.month
         << ", Year: " << today.year << std::endl;
    return(0);
} // end main

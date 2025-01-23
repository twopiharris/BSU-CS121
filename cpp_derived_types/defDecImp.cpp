
//defDecImp.cpp

#include <iostream>
#include <string.h>

//Declarations
//Declare a derived type

int myFunction();       //function
//function prototypes are a useful idiom in C / C++
struct S;               //structure

//Definitions
//reserve storage, but no values yet

int i, j;

//note that with some basic types you can define and initialize
//in the same step
int k = 10;

//structs and other complex data types can be defined outside a function
struct S {
    int p;
    char q[10];
}; // end S definition

//implementation of function declaration
int myFunction(){
    return(1);
} // end myFunction

int main(){
    //implementation of primitive variables
    i = 2;
    j = 3;

    //implementation of struct
    S thingie;
    thingie.p = 5;
    //thingie.q = "Hi";
    strcpy(thingie.q, "Hi");
    std::cout << myFunction() << std::endl;
    return 0;
}

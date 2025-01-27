//scopeRes.cpp

#include <iostream>

//i is declared globally (outside any functions)
int i = 1;

int main(){
    std::cout << "The value of i is " << i << std::endl;
    i = 99;

    //i is also declared (with a different value) inside main!
    int i = 2;

    i = 50;
    //what happens when we print out the value of i?
    std::cout << "local i: " << i << std::endl;

    //the local variable occludes (hides) the global

    //the :: operator resolves to the global scope
    std::cout << "global i: " << ::i << std::endl;

    return 0;
} // end main

//shallowHeap

//If a class uses heap variables,
//the default shallow copy may not be sufficient.

#include <iostream>
#include <cstdio>
#include <cstring>

//using namespace std;

class A{ // standard class w/out copy constructor
  private:
    //name is dynamic length, so it must be created on heap
    char *name;
  public:
    A(){
      //since name is defined on heap, size can be determined
      //at run-time
      name = new char[20];
      strcpy(name, "Fred");
    } // end constructor

    //no explicit copy constructor built;
    //still using default shallow copy constructor

    ~A(){
      //we now have a heap variable, so we must explicitly delete it
      delete[] name;
    } // end destructor

    void setName(char const *name){
      strcpy(A::name, name);
    } // end setName

    void greet(){
      printf("my name is %s. \n", name);
    } // end greet
}; // end A class def

int main(){
  //instantiate A
  A a;
  std::cout << "A's name should be Fred" << std::endl;
  a.greet();

  //shallow copies seem to work fine with heap variables too...
  A anotherA = a;
  std::cout << "Since anotherA is a copy, it will also be Fred" << std::endl;
  anotherA.greet();

  //but when we change the name of a...
  a.setName("George");
  std::cout << "A's name should now be George" << std::endl;
  a.greet();
  //...the name of anotherA also changes
  std::cout << "AnotherA's name should NOT be George" << std::endl;
  anotherA.greet();
  return 0;
} // end main

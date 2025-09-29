//DeepCopy.cpp
//If a class uses heap variables,
//the default shallow copy may not be sufficient.

#include <cstdio>
#include <cstring>
#include <iostream>

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

    A(const A &original){
      //explicit copy constructor
      //pass a reference to the original variable

      //allocate new heap space for this instance
      name = new char[20];

      //copy values from the original to the instance on the heap
      strcpy(name, original.name);
      //this is considered a 'deep' copy, because it not only copies
      //stack values, it makes new heap values as needed

    } // end copy constructor

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

  //If A has heap variables, it's possible they haven't been initialized
  //or have been changed.  The copy constructor accepts as a parameter a
  //reference to the original class, and it explicitly copies all data
  //members from the original. This is called a 'deep copy,' and it's used
  //whenever the class uses pointers or heap-based data members.
  A anotherA = a;
  std::cout << "AnotherA is a copy of A so it should also have the name Fred" << std::endl;
  anotherA.greet();

  //now because the actual data values have new memory on the heap,
  //each instance of the class has its own heap space for member data
  //changing the value of a...
  a.setName("George");
  std::cout << "After changing A's name, it should now be George" << std::endl;
  a.greet();

  //...doesn't modify the value of anotherA
  std::cout << "... but anotherA should still be Fred." << std::endl;
  anotherA.greet();

  return 0;
} // end main

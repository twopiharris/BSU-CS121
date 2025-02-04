// heapInstance.cpp
// creating an instance of a class on the heap

#include <cstdio>
#include <cstring>
#include <string>

//using namespace std;

class A{ 
  private:
    char *name;
  public:
    A(){
      name = new char[20];
      strcpy(name, "Fred");
    } // end constructor

    A(const A &original){
      //explicit copy constructor

      //allocate new heap space for this instance
      name = new char[20];

      //copy values from the original to the instance on the heap
      strcpy(name, original.name);

    } // end copy constructor

    ~A(){
      delete[] name;
    } // end destructor

    //fixed setName so it no longer throws the warning
    void setName(char const *name){
      strcpy(A::name, name);
    } // end setName

    void greet(){
      printf("my name is %s. \n", name);
    } // end greet
}; // end A class def

int main(){
  //instantiate A as a stack pointer to data on the heap
  A* a = new A();

  //to call the greet method, we must first deallocate the pointer
  (*a).greet();
  // the -> syntax is a shortcut that allows us to reference methods
  // and properties of instance pointers without deallocation
  a->greet();

  a->setName("George");
  a->greet();

  // delete a because it refers to heap data
  delete a;

  return 0;
} // end main

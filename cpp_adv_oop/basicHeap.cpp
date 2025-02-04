#include <iostream>

int main(){
  // ordinary stack variables
  int stackInt = 0;
  std::string stackString = "I'm on the stack";

  std::cout << "stackInt: " << stackInt << std::endl;
  std::cout << "stackString: " << stackString << std::endl;

  // heap variables
  // note that the new operator produces a POINTER
  // pointer is on stack, data is in heap

  int* heapInt = new int;
  *heapInt = 5;

  std::string* heapString = new std::string("I'm on the heap");

  // you can also create an array on the heap
  int* heapArray = new int[5];

  std::cout << "heapInt: " << *heapInt << std::endl;
  std::cout << "heapString: " << *heapString << std::endl;

  // heap variables need to be deleted
  // we are deleting the thing pointed to by the pointer
  delete heapInt;
  delete heapString;

  // use delete[] to delete an array on the heap
  delete[] heapArray;

  return(0);

} // end main

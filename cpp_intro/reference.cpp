//reference
//Using ampersand in declaration makes a REFERENCE (not quite a pointer)
//reference is another name for same exact memory space
//more convenient and safer than pointers

#include <iostream>

int main(){
  int i;
  int &j = i;

  //change j and i changes
  j = 5;
  std::cout << "i: " << i << std::endl;

  //change i and j changes
  i += 3;
  std::cout << "j: " << j << std::endl;

  return 0;

} // end main

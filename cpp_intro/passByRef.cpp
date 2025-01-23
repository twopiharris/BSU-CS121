#include <iostream>

void addOne(int beta){
  beta++;
} // end addOne

void addOneByRef(int &beta){
  beta++;
} // end addOneByRef

int main(){

  int alpha = 5;
  addOne(alpha);
  std::cout << "after addOne, alpha is " << alpha << std::endl;

  addOneByRef(alpha);
  std::cout << "after passing reference, alpha is " << alpha << std::endl;

} // end main
  

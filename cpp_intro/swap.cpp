#include <iostream>

// swap.cpp
// demonstrates swapping with references

void swap(int&, int&); 

int main(){
  int x = 3;
  int y = 5;

  std::cout << "BEFORE: " << std::endl;
  std::cout << "X: " << x << std::endl;
  std::cout << "Y: " << y << std::endl;

  swap(x, y);

  std::cout << "AFTER: " << std::endl;
  std::cout << "X: " << x << std::endl;
  std::cout << "Y: " << y << std::endl;
  return(0);
} // end main

void swap(int& a, int& b){
  int temp = a;
  a = b;
  b = temp;
} // end swap

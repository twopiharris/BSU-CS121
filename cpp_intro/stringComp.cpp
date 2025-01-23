#include <iostream>

int main(){

  //alpha and beta are same value but different memory
  //gamma is a reference to beta (same memory location)
  //delta is different content and different location

  std::string alpha = "a string";
  std::string beta = "a string";
  std::string &gamma = beta;
  std::string delta = "another string";

  // == operator acts (somehow) as expected
  if (alpha == beta){
    std::cout << "== operator true on same content" << std::endl;
  } 

  //compare works like c strcmp (0 for same content)
  if (alpha.compare(beta) == 0){
    std::cout << "compare is true" << std::endl;
  }

  // now check completely different strings
  if (alpha == delta){
    std::cout << "== operator true" << std::endl;
  } else {
    std::cout << "== operator false" << std::endl;
  } // end if

  //to check for memory location, compare addresses
  if (&alpha == &gamma){
    std::cout << "Addresses are the same" << std::endl;
  } else {
    std::cout << "Addresses are different" << std::endl;
  } 

  if (&beta == &gamma){
    std::cout << "Addresses are the same" << std::endl;
  } else {
    std::cout << "Addresses are different" << std::endl;
  } 

} // end main

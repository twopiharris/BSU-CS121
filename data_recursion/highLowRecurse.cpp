/* HighLowRecurse.cpp
   solves the 'human number'
   high low problem with recursion
*/

#include <iostream>


void hlRecurse(int lower, int upper);

int main(){
 hlRecurse(0, 100);
}

// Use recursion instead of looping
void hlRecurse(int lower, int upper){
  char input;
  int mid = (int)((lower + upper)/2);
  std::cout << "I guess " << mid << std::endl;
  std::cout << "too (h)igh?" << std::endl;
  std::cout << "too (l)ow?" << std::endl;
  std::cout << "or (c)orrect?" << std::endl;
  std::cin >> input;
  
  if (input == 'h'){
    hlRecurse(lower, mid);    
  } else if (input == 'l'){
    hlRecurse(mid, upper);
  } else if (input == 'c'){
    // do nothing. base case
    std::cout << "You win!" << std::endl;
  } else {
    std::cout << "that is not a valid response" << std::endl;
    hlRecurse(lower, upper);
  } // end if
}

#include <iostream>
/* demonstrates use of built-in exceptions
 * to generate a legal input in a loop
 */

int getInt();

int main(){
  int x = getInt();
  int y = getInt();
  std::cout << x << " + " << y << " = " << x + y << std::endl;
} // end main

int getInt(){
  bool keepGoing = true;
  std::string item;
  int x;
  while (keepGoing){
    keepGoing = false;
    std::cout << "Please enter an integer: ";
    getline(std::cin, item);

    try {
      x = stoi(item);
    } catch (std::invalid_argument){
      std::cout << "Not a valid integer. Try again, please. " << std::endl;
      keepGoing = true;
    } // end try

  } // end while
  return x;
} // end getInt


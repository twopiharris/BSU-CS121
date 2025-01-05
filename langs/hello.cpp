#include <iostream>

int main(){
  std::string userName;
  std::cout << "What is your name? ";
  std::cin >> userName;
  std::cout << "Hi " << userName << " from c++" << std::endl;
  return(0);
}

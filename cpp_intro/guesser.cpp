#include <iostream>
#include <random>

int main(){
  int correct;
  int guess;
  int turns = 0;
  std::string name;
  bool keepGoing = true;
  
  std::random_device rd;
  std::uniform_int_distribution<int> dist(1, 100);

  correct = dist(rd);

  std::cout << "Correct: " << correct << std::endl;

  while (keepGoing){
    turns++;
    std::cout << turns << ") Please enter a number: ";
    std::cin >> guess;

    if (guess < correct){
      std::cout << "too low." << std::endl;
    } else if (guess > correct){
      std::cout << "too high." << std::endl;
    } else {
      std::cout << "PERFECT! " << std::endl;
      keepGoing = false;
    } // end if
  } // end while

  if (turns < 7){
    std::cout << "Great job!" << std::endl;
  } else if (turns > 7){
    std::cout << "You should be able to do it in 7 turns or les... Just sayin'." << std::endl;
  } else {
    std::cout << "Good." << std::endl;
  } // end if

  return 0;
} // end main



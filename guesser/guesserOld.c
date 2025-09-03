#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <stdbool.h>

int main(){
  int turns =0;
  int correct;
  int guess;
  char name[20];
  bool keepGoing = true;

  srand(time(NULL));

  printf("Please enter your name: ");
  scanf("%s", name);
  printf("Hello %s. Let's play a game. \n", name);

  correct = (rand() % 100) + 1;

  printf("correct: %d \n", correct);

  while (keepGoing){

    turns++;
    printf("turn %d) Please enter a number: ", turns);
    scanf("%d", &guess);
    if (guess < correct){
      printf("too low. \n");
    } else if (guess > correct){
      printf("too high. \n");
    } else {
      printf("YOU WIN!!! \n");
      keepGoing = false;
    } // end if
  } // end while

  // evaluate results

  if (turns < 7){
    printf("Great \n");
  } else if (turns > 7){
    printf("You should be able to do it in 7 or fewer tries. \n");
  } else {
    printf("Good.");
  } // end if

  return 0;
} // end main


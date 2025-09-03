#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TRUE -1
#define FALSE 0

int main(){
  printf("Guess a number \n");
  int turns = 0;
  srand(time(NULL));
  
  int correct = rand() % 100;
  int guess;

  printf("correct: %d", correct);
  char userName[20];
  printf("Hi, what's your name? ");
  scanf("%s", userName);
  printf("Hi %s. \n", userName);
  int keepGoing = TRUE;
  
  while (keepGoing){
    printf("Your guess: ");
    scanf("%d", &guess);

    if (guess > correct){
      printf("too big");
    } else if (guess < correct){
      printf ("too low");
    } else {
      keepGoing = FALSE;
    } // end 
  } // end while
  printf("You win!");

  return 0;
}


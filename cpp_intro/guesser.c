/* Algorithm
 *
 * main():
 *   char[20] userName
 *   int guess starts -999
 *   int correct will be randomly generated later
 *   int turns starts at 0
 *   int keepGoing start true
 *
 *   generate a random between 1 and 100 put in correct
 *   ask for user's name 
 *   store it in userName
 *
 *   greet the user with name
 *
 *   while keepGoing is true:
 *     increment turns
 *     ask for a number
 *     put it in guess
 *     if guess < correct:
 *       print too low
 *     else if guess > correct:
 *       print too high
 *     else:
 *       print you got it
 *       set keepGoing to false
 *
 *   if turns < 7:
 *     say great
 *   else if turns > 7:
 *     say you could do better 
 *   else:
 *     say pretty good
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){
  char userName[20];
  int turns = 0;
  int guess = -999;
  int keepGoing = true;

  srand(time(NULL));
  int correct = (rand() % 100) + 1;

  printf("Hi. what's your name? ");
  scanf("%s", userName);

  printf("Let's play a game, %s \n", userName);

  while (keepGoing){
    turns++;
    printf("turn %d: Please enter a number. ", turns);
    scanf("%d", &guess);

    if (guess < correct){
      printf ("too low...\n");
    } else if (guess > correct){
      printf ("too high...\n");
    } else {
      printf("You got it!!! \n");
      keepGoing = false;
    } // end if
  } // end while

  return 0;
} // end main


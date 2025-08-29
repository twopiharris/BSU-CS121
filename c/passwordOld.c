//password.c

#include <stdio.h>
#include <string.h>

#define TRUE -1;
#define FALSE 0;

int main(){
  char guess[20] = "CS24000";
  char correct[20];
  int tries = 0;

  int keepGoing = TRUE;
  while (keepGoing){
    tries += 1;
    printf("%d: Your guess: ", tries);
    scanf("%s", correct);

    if (strcmp(guess, correct) == 0){
      printf("You may proceed \n");
      keepGoing = FALSE;
    } else if (tries >= 3){
      printf("Too many tries.  Launching the missiles");
      keepGoing = FALSE;
    } // end if
  } // end while

  return(0);

} // end main

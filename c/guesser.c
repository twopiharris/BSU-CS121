//guesser.c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int guess = -999;
  int correct;
  int tries = 0;

  //seed random generator
  srand(time(NULL));

  correct = rand() % 100;
  while (guess != correct){
    tries++;
    printf("%d) Your guess: ", tries);
    scanf("%d", &guess);
    if (guess < correct){
      printf ("too small! \n");
    } else if (guess > correct){
      printf("too large! \n");
    } else {
      printf("perfect! \n");
    } // end if
  } // end while
  printf("It took %d tries...\n", tries);
  return(0);

} // end main

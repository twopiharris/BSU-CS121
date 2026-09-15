#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int die;
  srand(time(NULL));
  for (int i = 0; i < 10; i++){
    die = (rand() % 6) + 1;
    //die = rand();
    //die = die % 6;
    //die = die + 1;
    printf("%d ", die);
  } // end for
  printf("\n");

  return 0;
} // end main


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  printf("Hello. \n");
  srand(time(NULL));
  for (int i = 0; i < 10; i++){
    int myNumber = (rand() % 6) + 1;
    printf("%d \n", myNumber);
  } // end for
  return 0;
} // end main


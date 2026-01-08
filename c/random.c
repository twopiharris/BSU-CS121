#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL));
  int a;
  for (int i = 0; i < 10; i++){
    a = rand();
    a = (a % 6) + 1;
    printf("%d ", a);
  } // end for
  printf("\n");

  return 0;
} // end main



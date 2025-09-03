#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  srand(time(NULL));
  printf("Hey. \n");
  for (int i = 0; i < 10; i++){
    int x = rand();
    int y = x % 100;
    printf("%d %d \n", x, y);
  } // end for
  return 0;
}


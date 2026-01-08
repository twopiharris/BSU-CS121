#include <stdio.h>
#include <string.h>

int main(){
  char response[10];
  strcpy(response, "no");
  int keepGoing = 1;

  while(keepGoing){
    printf("Are we there yet? ");
    scanf("%s", response);
    if (strcmp(response, "yes") == 0){
      keepGoing = 0;
    } // end if
  } // end while
  printf("Can we go home now? \n");

  return 0;
} // end main


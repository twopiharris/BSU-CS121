/* main idea
   import standard input, string library

   create string called correct store actual password in it
   create integer called tries and store 0 in it
   create a loop
     ask user for the password, store in string called guess
     add 1 to tries
     if the pasword is equal to correct
        Say "Great job"
        exit the loop
     if the number of tries is greater or equal to 3
        say "You lose"
        exit the loop
*/

#include <stdio.h>
#include <string.h>

#define TRUE -1
#define FALSE 0

int main(){
  int keepGoing = TRUE;
  char* correct = "CS121";
  char guess[10];
  int turns = 0;

  while (keepGoing){
    turns++;
    printf("Please enter the password: ");
    scanf("%s", guess);

    if (strcmp(guess, correct) == 0){
      printf("You got it!");
      keepGoing = FALSE;
    } else {
      if (turns >= 3){
        printf("Too many tries. Launching missiles.");
        keepGoing = FALSE;
      } // end if
    } // end if
  } // end while
  return 0;
} // end main

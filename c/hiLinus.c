#include <stdio.h>
#include <string.h>

// hi Linus
// illustrates string functions and if statement
int main(){
  char userName[20];
  char correct[20];

  //correct = "Linus";
  strcpy(correct, "Linus");

  printf("Correct is %s \n", correct);

  printf("What is your name? ");
  scanf("%s", userName);
  
  if (strcmp(userName, correct) == 0){
  //if (userName == correct){
    printf("Thanks for inventing linux. \n");
  } else {
    printf("Have you seen Linus around? \n");
  } // end if

  return 0;
} // end main

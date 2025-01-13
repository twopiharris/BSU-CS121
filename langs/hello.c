#include <stdio.h>

int main(){
  // this is a comment
  char userName[20];
  printf("What is your name? ");
  scanf("%s", userName);
  printf("Hi %s from C \n", userName);
  return 0;
}

#include <stdio.h>

#define TRUE -1;
#define FALSE 0;

int getInt(char*);
void flushBuffer();

int main(){
  int a = getInt("integer a: ");
  int b = getInt("integer b: ");
  int sum = a + b;
  printf("%d + %d = %d", a, b, sum);

  return 0;
} // end main

int getInt(char* prompt){
  int result = 0;
  int keepGoing = TRUE;
  while (keepGoing){
    printf("%s", prompt);
    int correctScans = scanf("%d", &result);
    if (correctScans == 1){
      // We have a good input. exit the loop
      keepGoing = FALSE;
      flushBuffer();
    } else {
      // try again
      printf("Invalid input. Please try again. \n");
      flushBuffer();
    } // end if
  } // end while
  return result;
} // end getInt

void flushBuffer(){
  // clear up any extraneous data after the expected input
  // scanset is something like a regular expression
  // this one means everything up until the newline
  scanf("%*[^\n]");
  // There will still be a newline in the buffer. Kill that too.
  getchar();
} // end flushBuffer


// lineIn.c
// grab in a line at a time with c

#include <stdio.h>

int main(){
  char data[80];
  char first[10];
  char last[10];
  int age;

  printf("Please type your first name last name and age: ");
  // fgets gets a string of text from a file until \n"
  // stdin is the input, but it's read just like a file
  fgets (data, 80, stdin);

  printf("here's the full line of data: \n");
  printf("%s \n", data);
  
  // sscanf scans a string as if it was input from the console
  sscanf(data, "%s %s %d", first, last, &age);

  printf("first: %s \n", first);
  printf("last: %s \n", last);
  printf("age: %d \n", age);

  return(0);
}


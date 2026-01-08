#include <stdio.h>

int main(){

  // c is strictly typed
  int myInteger = 15;
  long myLong = 2;
  float myFloat = 3;
  double myDouble = 4;
  char myChar = 'A';
  char myOtherChar = 97;

  // printing out the various types
  printf("myInteger: %d \n", myInteger);
  printf("myLong: %ld \n", myLong);
  printf("myFloat: %f \n", myFloat);
  printf("myDouble: %lf \n", myDouble);
  printf("myChar: %d \n", myChar);
  printf("myOtherChar: %c \n", myOtherChar);
  printf("\n");
  
  // casting and changing data representations
  printf("cast float to int: %d \n", (int)3.1415); 
  printf("binary rep of myChar: %b \n", myChar);
  printf("hex rep of myChar: %x \n", myChar);
  printf("\n");

  // looking at the size of things
  printf("size of int: %d bytes \n", (int)sizeof(myInteger));
  printf("size of long: %d bytes \n", (int)sizeof(myLong));
  printf("size of float: %d bytes \n", (int)sizeof(myFloat));
  printf("size of double: %d bytes \n", (int)sizeof(myDouble));
  printf("size of char: %d bytes \n", (int)sizeof(myChar));
  printf("\n");

  // what if we try to add an integer and a float?
  //printf("int + float: %d \n", myInteger + myFloat);
  printf("int + float: %f \n", myInteger + myFloat);
  printf("\n");

  //arrays are sequential assignments
  int myIntArray[10];
  printf("size of array of 10 ints: %d bytes \n", (int)sizeof(myIntArray));
  printf("length of array: %d elements \n", (int)sizeof(myIntArray)/(int)sizeof(myIntArray[0]));

  // there is no string type!!!
  // just an array of chars!!!

  char text[10];
  
  printf("text: |%s| \n", text);

  printf("size of text: %d bytes \n", (int)sizeof(text));
  return 0;
}


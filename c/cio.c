//cio.c 
//c-style input and output

#include <stdio.h>



int main(){
  //start with some standard data types

  int integer = 42;
  int foobar = 31;
  float pi = 3.1415927;
  char letter = 'a';
  char * name = "Foo Foo the Great";

  //integers can be output as decimal, hex (%x), or octal(%o)
  printf ("%d %x %o \n", integer, integer, integer);

  //you can determine width of floats
  //but decimal output makes no sense
  printf ("%f %4.2f %d \n", pi, pi, pi);
/*
  //print a single character with the "%c" modifier
  printf ("%c \n", letter);
  //print an entire string with "%s"
  printf ("%s \n", name);

  //use a number to represent width of string
  printf ("|%20s| \n", name);
  //minus sign left-justifies the text
  printf ("|%-20s| \n", name);

  //input
  printf("Please enter a number: ");
  //scanf expects the same types of codes as printf
  //No other formatting!
  //second parameter MUST BE AN ADDRESS!
  scanf("%d",  &integer);
  printf("Your number: %d \n", integer);

  //string input
  //must also be an address
  //name of an array is already a pointer
  printf("What is your name? ");
  char newName[20];
  scanf("%s", newName);

  printf("Hi there, %s! \n", newName);

  char otherThing[20];
  printf("Say something else...");
  scanf("%s", otherThing);

  printf ("%s\n", otherThing);
  return(0);
*/
} // end main3

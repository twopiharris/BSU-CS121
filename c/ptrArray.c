// c arrays and pointers
#include <stdio.h>
//using #define to create a constant
#define SIZE 3
//define can also be used to make a 'macro'
#define COUNT for(i = 0; i < 5; i++){printf ("%d ",i);}printf("\n");

int main(){
  int i = 0;
  //COUNT;
  //pre-defined array
  int score[] = {3, 2, 4};

  //step through array with a for loop
  for (i = 0; i < SIZE; i++){
    printf("%d) %d \n", i, score[i]);
  } // end for
 

  //alternate way to define and fill array
  int par[SIZE];
  par[0] = 2;
  par[1] = 3;
  par[2] = 3;
  printf("\n");
  for (i = 0; i < SIZE; i++){
    printf("%d (%d): %d \n", i, par[i], score[i]);
  } // end for

  //array is actually a pointer to the first element!
  printf("score for 0: %d\n", *score);
  // this line actually shows the address of the first element
  printf("score: %p \n", score);
  // this line shows the address of the next element (still not useful)
  printf("score + 1: %p \n", score + 1);

  printf("score for 1: %d \n", *(score + 1));
  //be careful with order of operations!!
  printf("NOT score for 1: %d\n", *score + 1);


  //What if you try to print something that
  //isn't really part of the array?
  printf("Garbage: %d \n", *(score + 5));
/*

  */
  return(0);
} // end main





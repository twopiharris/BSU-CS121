#include <stdio.h>

int main(){
  int a, b;
  printf("Please enter a number: ");
  scanf("%d", &a);

  printf("Now another number: ");
  scanf("%d", &b);

  int sum = a + b;
  printf("%d + %d = %d \n", a, b, sum);

  return 0;
} // end main


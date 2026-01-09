#include <stdio.h>

int main(){
  int a, b;
  printf("Please enter a number: ");
  scanf("%d", &a);

  printf("Now another number: ");
  scanf("%d", &b);

  int sum = a + b;
  printf("%d + %d = %d \n", a, b, sum);

  int quotient = a / b;
  int mod = a % b;
  printf("%d / %d = %d remainder %d \n", a, b, quotient, mod);
  
  float fa = (float)a;
  float fb = (float)b;
  float fq = fa / fb;
  printf("%f / %f = %f \n", fa, fb, fq);

  return 0;
} // end main


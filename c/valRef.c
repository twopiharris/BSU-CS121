//valRef.c
//passing by value and passing by reference

#include <stdio.h>

void addOne(int);
void addOnePtr(int *);

void main(){
    int a = 2;
    printf("before addOne: %d \n", a);
    addOne(a);
    printf("after addOne: %d \n", a);
    addOnePtr(&a);
    printf("after addOnePtr: %d \n", a);
} // end main

void addOne(int var){
    var++;
    printf("Inside addOne: %d \n", var);
} // end addOne

void addOnePtr(int* varPtr){
    (*varPtr)++;
    printf("Inside AddOnePtr: %d \n", *varPtr);
} // addOnePtr



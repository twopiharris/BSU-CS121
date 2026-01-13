//pointers.c

#include <stdio.h>

int main(){
    // you can extract address of ordinary variable
    // with & operator
    int a = 5;
    printf("value of a: %d \n", a);
    printf("address of a: %p \n", &a);

    // * in definition is 'pointer'
    // * in code is 'value at'
    int* pA = &a;
    printf("value OF pA: %p \n", pA);
    printf("value AT pA: %d \n", *pA);
    //printf("value AT a: %d \n", *a);


    // You can have a pointer to a pointer!
    int ** ppA = &pA;
    printf("value OF ppA: %p \n", ppA);
    printf("value AT ppA: %p \n", *ppA);
    printf("value AT value AT ppA: %d \n", **ppA);
    return 0;




} // end main

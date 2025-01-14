//ptrString.c
//pointers and Strings in C

#include <stdio.h>
#include <string.h>

int main(){
    // There is no string type in C!
    // Strings are arrays of chars

    char fName[20] = "Andy";
    printf ("Hi there %s! \n", fName);

/*
    //the next two lines are equivalent
    printf ("fName[3]: %c \n", fName[3]);
    printf ("fName[3]: %c \n", *(fName + 3));
    printf ("NOT fName[3]: %c \n", *fName + 3);

    //you can assign an entire string to a character pointer
    char * lName = "Harris";
    printf("Hi, %s %s! \n", fName, lName);

    
    //input expects a character POINTER type
    //but a char array is already this type
    //You need to specify the length
    char realName[20];
    printf("Seriously, what's your name? ");
    scanf("%s", realName);
    printf("Hi, %s! \n", realName);


    //string length is fixed
    //'dynamic' strings are fixed by initial assignment

    char * shortName = "a";
    //following line won't work...
    //shortName[1] = "b";

    printf ("%s \n", shortName);


    //if you want to manipulate strings, you must use
    //functions like strcpy
    strcpy(fName, "George");
    printf ("%s \n", fName);

    //copying a string does NOT do what you expect!
    fName = lName;

    //printf("%s %s", fName, lName);


    //that copies the value of one pointer to another!
    //comparing strings also doesn't work as expected!
    char strA[10] = "Joe";
    char strB[10] = "Joe";
    
    if (strA == strB){
      printf ("They are the same! \n");
    } else {
      printf ("They are different! \n");
    } // end if


    //previous statement was checking the ADDRESSES
    //use strcmp for true equality
    //strcmp returns 0 if they are the same
    //NOT a boolean function!

    if (strcmp(strA, strB) == 0){
      printf ("They are the same! \n");
    } else {
      printf ("They are different! \n");
    } // end if

    // strings seem shorter than length
    // by embedding null character
    strcpy(realName, "Andy Harris");
    //next line does not print 20 characters
    printf ("X%sX \n", realName);

    //you can embed a null directly
    realName[4] = '\0';
    printf ("%s \n", realName);

    //rest of string is in memory but not displayed
    printf ("%c \n", realName[5]);
*/
} // end main

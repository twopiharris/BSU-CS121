//hiUser.c
//asks users name and includes in greeting

/* this is a multiline
 * comment
*/

#include <stdio.h>

int main(){
    char name[20];
    printf("What is your name? ");
    scanf("%s", name);
    printf("Hi, %s! \n", name);

    return(0);
} // end main

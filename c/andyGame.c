#include <stdio.h>
#include <stdbool.h>

#define QUIT 999

int playNode(int node);

struct room {
  char description[100];
  char menuA[20];
  int nodeA;
  char menuB[20];
  int nodeB;
};

struct room game[3] = {
  {"Do you want to win or lose?", "win", 1, "lose", 2},
  {"You win!", "start over", 0, "quit", QUIT},
  {"You lose!", "start over", 0, "quit", QUIT}
};

int main(){
  printf("Hello. \n");
  int node = 0;
  bool keepGoing = true;
  while (keepGoing){
    if (node == QUIT){
      keepGoing = false;
    } else {
      node = playNode(node);
    } // end if
  } // end while

  return 0;
} // end main

int playNode(int node){
  int nextNode = node;
  int response = 0;
  printf("%s \n", game[node].description);
  printf("  1) %s \n", game[node].menuA); 
  printf("  2) %s \n", game[node].menuB);
  printf("\n");

  printf("Your choice: ");
  scanf("%d", &response);
  if (response == 1){
    nextNode = game[node].nodeA;
  } else if (response == 2){
    nextNode = game[node].nodeB;
  } else {
    printf("Not a legal input \n");
  } // end if

  return nextNode;
} // end playNode


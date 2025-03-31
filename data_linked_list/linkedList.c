//linkedList.c

#include <stdio.h>

struct node{
  char * data;
  struct node * next;
};

void iterate(struct node * head){
  struct node * curNodePtr = head;
  while (curNodePtr != NULL){
    struct node curNode = *curNodePtr;
    printf("%s \n", curNode.data);
    //printf("%s \n", curNodePtr->data);
    curNodePtr = curNode.next;
  } // end while
} // end iterate

int main(void){
  struct node a;
  struct node b;
  struct node c;

  a.data = "alpha";
  a.next = &b;
  b.data = "beta";
  b.next = &c;
  c.data = "charlie";
  c.next = NULL;

  struct node * head = &a;
  iterate(head);
  return 0;
} // end main


#include "linkedList.h"
#include "node.h"
#include <iostream>

LinkedList::LinkedList(){
  this->head = NULL;
} 

LinkedList::~LinkedList(){
  Node* current = head;
  Node* temp;

  while(current != NULL){
    temp = current->getNext();
    delete(current);
    current = temp;
  } // end while

} // end destructor

void LinkedList::append(std::string value){

  if (head == NULL){
    // empty list;  new node is head
    head = new Node(value, NULL);
  } else {
    // go to end and add to it
    Node* current = head;
    while (current->getNext() != NULL){
      current = current->getNext();
    } // end while
    // current is last, add new node to end
    current->setNext(new Node(value, NULL));
  } // end if
} // end append

void LinkedList::traverse(){
  Node* current = head;
  while (current != NULL){
    std::cout << current->getPayload() << std::endl;
    current = current->getNext();
  } // end while
} // end traverse


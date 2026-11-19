#include "stack.h"
#include "node.h"
#include <string>
#include <iostream>

Stack::Stack(){
  Stack::head = NULL;
} // end constructor

Stack::~Stack(){
  // Clear the stack through iteration
  // See clear() method for a recursive solution
  
  //Stack::clear();
  Node* currentNode = Stack::head;
  bool keepGoing = true;

  while (keepGoing){
    if (this->isEmpty()){
      keepGoing = false;
    } else {
      currentNode = this->pop();
      delete(currentNode);
    } // end if
  } // end while

} // end destructor 

void Stack::push(Node* newNode){
  newNode->setNextNode(head);
  Stack::head = newNode;
} // end push

Node* Stack::pop(){
  Node* temp = Stack::head;
  Stack::head = Stack::head->getNextNode();
  return(temp);
} // end pop

std::string Stack::print(){
  // iterate through the stack printing out each node on 
  // a seperate line as a debugging tool
  std::string output = "";
  if (Stack::head != NULL){ 
    Node* currentNode = Stack::head;
    while (currentNode != NULL){
      output += currentNode->getPayload() + "\n";
      currentNode = currentNode->getNextNode();
    } // end while
  } // end if
  return output;
} // end print

bool Stack::isEmpty(){
  bool result = false;
  if (Stack::head == NULL){
    result = true;
  } // end if
  return result;
} // end isEmpty

void Stack::clear(){
  //recursively clear nodes
  if (Stack::isEmpty()){
    //do nothing
  } else {
    Node* currentNode = Stack::pop();
    delete(currentNode);
    Stack::clear();
  } // end if
} // end clear


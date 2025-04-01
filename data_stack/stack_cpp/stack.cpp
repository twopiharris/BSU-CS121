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
  //don't delete an empty stack!
  if (currentNode != NULL){
    Node* nextNode;
    bool keepGoing = true;
    while (keepGoing){
      nextNode = currentNode->getNextNode();
      std::cout << "deleting " << currentNode->getPayload() << std::endl;
     delete(currentNode);
     if (nextNode== NULL){
        keepGoing = false;
      } else {
        //delete(currentNode);
        currentNode = nextNode;
       } // end if
    } // end keepGoing
  } // end 'null destructor check
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

Stack* Stack::invert(){
  //inverts this stack
  // build a temp stack
  Stack temp = Stack();
  while (!Stack::isEmpty()){
    temp.push(Stack::pop());
    std::cout << "main" << std::endl << Stack::print() << std::endl;
    std::cout << "temp" << std::endl << temp.print() << std::endl;
  } // end while
  //Stack::head = temp->head;
  std::cout << "after temp" << std::endl << temp.print() << std::endl;
  std::cout << "after main" << std::endl << Stack::print() << std::endl;

/*  Node* tNode;
  while (!temp->isEmpty()){
    tNode = temp->pop();
    delete(tNode);
  } // end while
*/
  return(&temp);
  //delete(temp);       
} // end invert


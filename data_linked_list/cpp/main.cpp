#include <iostream>
#include "node.h"
#include "linkedList.h"

void testNode();

int main(){
  //  testNode();
  LinkedList* ll = new LinkedList();
  ll->append("a");
  ll->append("b");
  ll->append("c");

  ll->traverse();

  delete(ll);
  return 0;
  
} // end main


void testNode(){
  Node b = Node();
  b.setPayload("I am B");
  Node a = Node("I am A", &b);

  std::cout << a.getPayload() << std::endl;
  std::cout << a.getNext()->getPayload() << std::endl;
} // end testNode



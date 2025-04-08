#include <iostream>
#include "Node.h"

//void buildSample();
void inOrder(Node * n);
void preOrder(Node * n);
void postOrder(Node * n);

Node * head = NULL;

int main(){

  Node one = Node("1", NULL, NULL);
  Node three = Node("3", NULL, NULL);
  Node two = Node("2", &one, &three);
  Node five = Node("5", NULL, NULL);
  Node seven = Node("7", NULL, NULL);
  Node six = Node("6", &five, &seven);
  Node four = Node("4", &two, &six);

  head = &four;


  std::cout << "in-order" << std::endl;
  inOrder(head);
  std::cout << std::endl;

  std::cout << "pre-order" << std::endl;
  preOrder(head);
  std::cout << std::endl;

  std::cout << "post-order" << std::endl;
  postOrder(head);
  std::cout << std::endl;

}

void inOrder(Node * nPtr){
  if (nPtr != NULL){
    Node n = *nPtr;
    inOrder(n.getLeft());
    std::cout << n.getData() << std::endl;
    inOrder(n.getRight());
  } // end if
} // end method

void preOrder(Node * nPtr){
  if (nPtr != NULL){
    Node n = *nPtr;
    std::cout << n.getData() << std::endl;
    preOrder(n.getLeft());
    preOrder(n.getRight());
  } // end if
} // end method

void postOrder(Node * nPtr){
  if (nPtr != NULL){
    Node n = *nPtr;
    postOrder(n.getLeft());
    postOrder(n.getRight());
    std::cout << n.getData() << std::endl;
  } // end if
} // end method

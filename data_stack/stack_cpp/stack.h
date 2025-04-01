#ifndef STACK_H
#define STACK_H

#include "node.h"
#include <string>

class Stack{
  protected:
    Node* head;
  public:
    Stack();
    ~Stack();
    void push(Node* newNode);
    Node* pop();
    std::string print();
    bool isEmpty();
    void clear();
    Stack* invert();
};

#endif

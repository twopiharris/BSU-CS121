#include "node.h"
#include <string>

#ifndef LINKED_LIST_H_EXISTS
#define LINKED_LIST_H_EXISTS

class LinkedList {
  protected:
    Node* head;

  public:
    LinkedList();
    ~LinkedList();
    void append(std::string value);
    void traverse();
};

#endif

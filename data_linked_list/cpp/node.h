#ifndef NODE_H_EXISTS
#define NODE_H_EXISTS

#include <string>

class Node {
  private:
    std::string payload;
    Node* next;

  public:
    Node();
    Node(std::string, Node*);

    std::string getPayload();
    void setPayload(std::string);

    Node* getNext();
    void setNext(Node*);
};

#endif

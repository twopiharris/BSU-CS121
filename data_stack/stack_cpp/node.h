#ifndef NODE_H
#define NODE_H

#include <string>

class Node {
  protected:
    std::string payload;
    Node* nextNode;
  public:
    Node();
    Node(std::string payload, Node* nextNode);
    Node(std::string payload);
    ~Node();
    void setPayload(std::string payload);
    std::string getPayload();
    void setNextNode(Node* nextNode);
    Node* getNextNode();
};

#endif 

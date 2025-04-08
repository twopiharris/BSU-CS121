#include <string>
#ifndef NODE_H_INCLUDED
#define NODE_H_INCLUDED

class Node {
  private:
    std::string data;
    Node * left;
    Node * right;
  public:
    Node();
    Node(std::string data, Node * left, Node * right);
    void setData(std::string data);
    void setLeft(Node * left);
    void setRight(Node * right);
    std::string getData();
    Node * getLeft();
    Node * getRight();
};
#endif // NODE_H_INCLUDED

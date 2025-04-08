#include "Node.h"


Node::Node(){
  Node::data = "";
  Node::left = NULL;
  Node::right = NULL;
}

Node::Node(std::string data, Node * left, Node * right){
  Node::data = data;
  Node::left = left;
  Node::right = right;
}

void Node::setData(std::string data){
  Node::data = data;
}
void Node::setLeft(Node * left){
  Node::left = left;
}
void Node::setRight(Node * right){
  Node::right = right;
}
std::string Node::getData(){
  return Node::data;
}
Node * Node::getLeft(){
  return Node::left;
}
Node * Node::getRight(){
  return Node::right;
}

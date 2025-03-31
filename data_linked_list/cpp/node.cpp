#include "node.h"

Node::Node(){
  this->payload = "";
  this->next = NULL;
}

Node::Node(std::string payload, Node* next){
  this->payload = payload;
  this->next = next;
}

std::string Node::getPayload(){
  return this->payload;
}

void Node::setPayload(std::string payload){
  this->payload = payload;
}

Node* Node::getNext(){
  return this->next;
}

void Node::setNext(Node* next){
  this->next = next;
} 

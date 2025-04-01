#include "node.h"
#include <iostream>

using namespace std;

Node::Node(){
  Node::payload = "";
  Node::nextNode = NULL;
} // end null param constructor

Node::Node(string payload, Node* nextNode){
  Node::payload = payload;
  Node::nextNode = nextNode;
} // end two param constructor

Node::Node(string payload){
  Node::payload = payload;
  Node::nextNode = NULL;
}// end single string constructor

Node::~Node(){
  //do nothing for now, no members on heap
} // end destructor

void Node::setPayload(string payload){
  Node::payload = payload;
} // end setPayload

string Node::getPayload(){
  return Node::payload;
} // end getPayload

void Node::setNextNode(Node* nextNode){
  Node::nextNode = nextNode;
} // end setNextNode

Node* Node::getNextNode(){
  return Node::nextNode;
} // end getNextNode


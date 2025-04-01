//PersonNode.cpp

#include <iostream>
#include "personNode.h"

using namespace std;

PersonNode::PersonNode(){
  PersonNode::name = "";
  PersonNode::nextPerson = NULL;
} // end constructor

PersonNode::PersonNode(string name){
  PersonNode::name = name;
  PersonNode::nextPerson = NULL;
} // end 

void PersonNode::setName(string name){
  PersonNode::name = name;
} // end setName

string PersonNode::getName(){
  return(PersonNode::name);
} // end getName

void PersonNode::setNextPerson(PersonNode* nextPerson){
  PersonNode::nextPerson = nextPerson;
} // end setNext

PersonNode* PersonNode::getNextPerson(){
  return(PersonNode::nextPerson);
} // end getNextPerson


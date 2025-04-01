//FamNode.cpp

#include "personNode.h"
#include "famNode.h"

using namespace std;

FamNode::FamNode(){
  FamNode::name = "";
  FamNode::nextFamNode = NULL;
  FamNode::nextPersonNode = NULL;
} // end constructor

void FamNode::setName(string name){
  FamNode::name = name;
}

string FamNode::getName(){
  return(FamNode::name);
}

void FamNode::setNextFam(FamNode* nextFam){
  FamNode::nextFamNode = nextFam;
} 

FamNode* FamNode::getNextFam(){
  return (FamNode::nextFamNode);
}

void FamNode::setNextPerson(PersonNode* nextPerson){
  FamNode::nextPersonNode = nextPerson;
} 

PersonNode* FamNode::getNextPerson(){
  return (FamNode::nextPersonNode);
}
 


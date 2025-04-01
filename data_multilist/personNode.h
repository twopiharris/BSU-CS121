//personNode.h
#ifndef PERSON_NODE_H
#define PERSON_NODE_H

#include <string>

class PersonNode {
  protected:
    std::string name;
    PersonNode* nextPerson;

  public:
    PersonNode();
    PersonNode(std::string);
    void setName(std::string name);
    std::string getName();
    void setNextPerson(PersonNode*);
    PersonNode* getNextPerson();
}; // end class 

#endif


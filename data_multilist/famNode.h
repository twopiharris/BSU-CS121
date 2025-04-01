//famNode.h


#ifndef FAM_NODE_H
#define FAM_NODE_H

#include "personNode.h"
#include <string>

class FamNode{
  protected:
    std::string name;
    FamNode* nextFamNode;
    PersonNode* nextPersonNode;
  
  public:
    FamNode();
    void setName(std::string name);
    std::string getName();
    void setNextFam(FamNode* nextFam);
    FamNode* getNextFam();
    void setNextPerson(PersonNode* nextPerson);
    PersonNode* getNextPerson();
}; // end class def

#endif

// main.cpp
// test person and family nodes

#include "famNode.h"
#include "personNode.h"

#include <iostream>

using namespace std;

int main();

int main(){
  // create single instances on heap
  PersonNode* p = new PersonNode();
  p->setName("Ben");
  PersonNode* p2 = new PersonNode();
  p2->setName("Elizabeth");
  p->setNextPerson(p2);

  FamNode* f = new FamNode();
  FamNode* f2 = new FamNode();
  f->setName("Harris");
  f->setNextPerson(p);
  
  f2->setName("Smith");
  f->setNextFam(f2);

  cout << "fam: " << f->getName() << endl;
  cout << "person: " << p->getName() << endl;
  cout << "f-p-p-n: " << f->getNextPerson()->getNextPerson()->getName() << endl;
  cout << "f-f-n: " << f->getNextFam()->getName() << endl;

  delete(p);
  delete(p2);
  delete(f);
  delete(f2);
} // end main

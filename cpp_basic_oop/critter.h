//critter.h
#ifndef CRITTER_H_EXISTS
#define CRITTER_H_EXISTS

#include <string>

class Critter {
  private:
    std::string name;
  public:
    Critter();
    void setName(std::string name);
    std::string getName();
}; // end class def


#endif


#ifndef CRITTER_H_EXISTS
#define CRITTER_H_EXISTS

#include <string>
class Critter {
  protected:
    std::string name;
    int age;
  public:
    Critter();
    void populate(std::string name, int age);
    std::string getName();
    void setName(std::string name);
    int getAge();
    void setAge(int age);
    void greet();
};
#endif
    

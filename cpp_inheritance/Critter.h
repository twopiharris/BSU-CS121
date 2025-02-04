#include <string>

//Critter.h
class Critter{
  protected:
    std::string name;
  public:
    Critter();
    Critter(std::string name );
    void greet();
}; // end Critter def



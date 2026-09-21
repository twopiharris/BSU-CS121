#include <iostream>
#include <string>

class Critter {
  private:
    std::string name;
    int age;
  public:
    Critter();
    Critter(std::string name, int age);
    void setName(std::string name);
    std::string getName();
    void setAge(int age);
    int getAge();
    void sayHi();
};

int main(){
  Critter theCritter;
  theCritter.sayHi();
  theCritter.setName("Percival");
  theCritter.setAge(10);
  theCritter.sayHi();
  Critter anotherCritter("Martha", 5);
  anotherCritter.sayHi();

  return 0;
}


// Critter method definitions
Critter::Critter(){
  setName("anon");
  setAge(0);
} // end const

Critter::Critter(std::string name, int age){
  setName(name);
  setAge(age);
} // end const

void Critter::setName(std::string name){
  Critter::name = name;
} // end setName

std::string Critter::getName(){
  return Critter::name;
} // end getName

void Critter::setAge(int age){
  Critter::age = age;
} // end setAge

int Critter::getAge(){
  return Critter::age;
} // end getAge

void Critter::sayHi(){
  std::cout << "Hi. My name is " << getName();
  std::cout << " and I am " << getAge();
  std::cout << " years old." <<std::endl;
} // end sayHi




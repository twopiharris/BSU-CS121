#include <iostream>

class Critter {
  private:
    std::string name;

  public:
    Critter(){
      name = "anonymous";
    } // end Constructor

    Critter(std::string name){
      Critter::name = name;
    } // end constructor 

   void setName(std::string name){
      Critter::name = name;
    } // end setName
    
    std::string getName(){
      return Critter::name;
    } // end getName

    void sayHi(){
      std::cout << "Hi.  My name is " << name << "!" << std::endl;
    } // end sayHi

};

main(){
/* expected output:
   Anonymous
   Hi, my name is Anonymous
   Hi, my name is Grace
   Hi, my name is Ada
*/

  Critter c;
  std::cout << c.getName() << std::endl;
  c.sayHi();
  c.setName("Grace");
  c.sayHi();
  Critter c1("Ada");
  c1.sayHi();

  return(0);


} // end main


#include <memory>
#include <iostream>

// Note this example must be compiled with c++11 or later!
// g++ -std=c++11 managedPointers.cpp


class Critter{
  private:
    std::string name;
    int age;
  public:
    Critter(){
      Critter::name = "Anonymous";
      Critter::age = 0;
    } // end constructor

    Critter(std::string name, int age){
      Critter::name = name;
      Critter::age = age;
    } // end constructor

    void setName(std::string name){
      Critter::name = name;
    } // end setName

    void greet(){
      std::cout << "Hi. My name is " << Critter::name << "!" << std::endl;
    } // end greet
}; // end class def

int main(){
  // unique pointer creates a managed pointer based on a standard pointer
  std::unique_ptr<Critter> c(new Critter("George", 5));

  // now we can treat it as an ordinary pointer (-> is overwritten);
  c->greet();
  
  // no need to delete, because when instance pointer goes out of scope,
  // destructor will be automatically called  when needed.
  // unique pointers cannot be copied, only moved.
  
  // if you need a heap object with more than one stack reference, 
  // used the shared_ptr instead.
  auto c2 = std::make_shared<Critter>("Bob", 6);  
  auto c3 = c2;

  // c2 and c3 are both local pointers to the same heap object
  c2->setName("Martha");
  c3->greet();  

  // you can invoke use_count() on a shared pointer to see how many usrs
  std::cout << "c2 has " << c2.use_count() << " users." << std::endl;

  // once use_count is at zero, heap memory will be automatically deallocated
  // test with valgrind to be sure no memory leaks
 
} // end main



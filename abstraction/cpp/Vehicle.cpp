#include <iostream>

class Vehicle{
  protected:
    int numberOfWheels = 4;
  public:

    // declaring a function as virtual means 
    // the method is intended to be overwritten in a child class
    // assigning its value to zero makes it PURE virtual
    // meaning that the class cannot be directly instantiated.
    // a C++ class is abstract if it contains pure virtual methods
    // virtual functions require some level of polymorphism
    virtual void steerLeft() = 0;
    virtual void steerRight() = 0;

    // we can still have instantiated methods in an abstract class
    // These can still be overwritten to provide polymorphism
    void speedUp(){
      std::cout << "VROOM!" << std::endl;
    } // end speedUp

    void slowDown(){
      std::cout << "SCREEECH!" << std::endl;
    } // end slowDown
}; // end Vehicle class
      

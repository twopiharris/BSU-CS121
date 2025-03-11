#include <iostream>
#include "Vehicle.cpp"

class Car: public Vehicle{
  public:
    void steerLeft(){
      std::cout << "turning left" << std::endl;
    } // end steerLeft();

    void steerRight(){
      std::cout << "turning right" << std::endl;
    } // end steerRight

}; //end class definition


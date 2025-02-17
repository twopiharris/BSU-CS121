//staticBus.cpp

#include <iostream>
#include <string>

class Bus {
  private:
    std::string name;
    int passengers;
  public:
    static int totalPass;
    Bus();
    Bus(std::string name);
    void board(int numPass);
    void debark(int numPass);
    void printPass();
    static void printTotal();
}; // end class def

Bus::Bus(){
  name = "";
  passengers = 0;
} // end Bus constructor

Bus::Bus(std::string name){
  Bus::name = name;
  passengers = 0;
} // end single std::string constructor

void Bus::board(int numPass){
  //adds the indicated number of passengers
  //to the current bus
  passengers += numPass;

  //add to total passengers
  totalPass += numPass;
  printPass();
} // end board

void Bus::debark(int numPass){
  passengers -= numPass;
  if (passengers < 0 ){
    std::cout << "You can't have negative passengers!" << std::endl;
    //put them back
    passengers += numPass;
  } // endIf
  //no need to modify totalPassengers
  printPass();
} // end debark

void Bus::printPass(){
  //prints bus name, # of passengers
  std::cout << name << ": "<< passengers << std::endl;
} // end printPass;

void Bus::printTotal(){
  //prints out the total (static)
  //number of passengers
  std::cout << "Total Passengers: " << totalPass << std::endl;
  //std::cout << "passengers on THIS bus: " << passengers << std::endl;
}

//static variables must be declared in global scope!
//C++ wierdness...
int Bus::totalPass = 0;

int main(){
  Bus b1("Magic bus");
  b1.board(5);
  b1.board(3);
  b1.debark(4);

  //printTotal is static: Use class scope modifier
  Bus::printTotal();

  //toss in some more buses
  Bus b2("Gus the bus");
  Bus b3("Lime-O-zine");

  //do a bunch of transactions
  b2.board(12);
  b3.board(9);
  b2.debark(6);
  b1.board(5);
  b3.debark(8);

  //total passengers value is shared between buses
  Bus::printTotal();

  return 0;
}


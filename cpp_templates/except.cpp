//Exception-handling cpp

#include<iostream>
#include<cstdlib>


class zero{
  //this class is actually an error type
  public:
   zero()  //Constructor
    {
        std::cout<<"Class Zero Constructor Invoked!!"<<std::endl;
    }
};

//Exception Checker Function
void zero_check(int i){
   if (i == 0)
    throw zero(); //Argument is of zero class type.
}
main(){
   //try block
   try{
     //note no
     for (int i = 2; ; i--){
        zero_check(i);
        std::cout << "Reciprocal: " << 1.0/i << std::endl;
    }
   //Handler
   } catch(zero){
     std::cout << "DIVIDE BY ZERO -- ERROR!!\n"; 
     exit(-1);
   } // end try
} // end main

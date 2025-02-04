//complex.cpp
//demonstrates overloading plus operator

#include <iostream>
//using namespace std;

class complex {
  private:
    int real, ima;
  public:
    complex(int real = 0, int ima = 0);
    void printValue();
    //use friend functions for operator overloading
    friend complex operator+(complex, complex);
    friend std::ostream& operator<<(std::ostream& os, const complex& c);
}; // end complex def

complex::complex(int real, int ima){
  complex::real = real;
  complex::ima = ima;
} // end constructor

void complex::printValue(){
  //prints out the content of the real number
  std::cout << "real: " << real << ", ima: " << ima << std::endl;
} // end printValue

complex operator+(complex a, complex b){
  //define + in the context of a complex number
  int realPart = a.real + b.real;
  int imaPart = a.ima + b.ima;
  complex result = complex(realPart, imaPart);
  return result;
}

std::ostream& operator<<(std::ostream& os, const complex& c){
  //define easy way to add this class to an output
  //stream
  os << "real: " << c.real << ", ima: " << c.ima << std::endl;
  return os;
} // end stream overload

int main() {
  complex a(2, 3);
  complex b(4, 5);
  complex sum = a + b;
  a.printValue();
  b.printValue();
  sum.printValue();

  std::cout << std::endl << std::endl;
  std::cout << a << b << sum;

  return 0;
} // end main

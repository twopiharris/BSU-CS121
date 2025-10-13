//Complex.cpp
//demonstrates overloading plus operator

#include <iostream>
//using namespace std;

class Complex {
  private:
    int real, ima;
  public:
    Complex(int real = 0, int ima = 0);
    void printValue();
    //use friend functions for operator overloading
    friend Complex operator+(Complex, Complex);
    friend std::ostream& operator<<(std::ostream& os, const Complex& c);
}; // end Complex def

Complex::Complex(int real, int ima){
  Complex::real = real;
  Complex::ima = ima;
} // end constructor

void Complex::printValue(){
  //prints out the content of the real number
  std::cout << "real: " << real << ", ima: " << ima << std::endl;
} // end printValue

Complex operator+(Complex a, Complex b){
  //define + in the context of a complex number
  int realPart = a.real + b.real;
  int imaPart = a.ima + b.ima;
  Complex result = Complex(realPart, imaPart);
  return result;
}

std::ostream& operator<<(std::ostream& os, const Complex& c){
  //define easy way to add this class to an output
  //stream
  os << "real: " << c.real << ", ima: " << c.ima << std::endl;
  return os;
} // end stream overload

int main() {
  Complex a(2, 3);
  Complex b(4, 5);
  Complex sum = a + b;
  a.printValue();
  b.printValue();
  sum.printValue();

  std::cout << std::endl << std::endl;
  std::cout << a << b << sum;

  return 0;
} // end main

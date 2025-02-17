//templateDemo

#include <iostream>

class AddInts{
  private:
    int x, y, z;
  public:
    AddInts(int x = 1, int y = 2, int z = 3){
      AddInts::x = x;
      AddInts::y = y;
      AddInts::z = z;
    } // end constructor
    int getSum(){
      return x + y + z;
    } // end getSum
}; // end AddInts class def

class AddFloats{
  private:
    float x, y, z;
  public:
    AddFloats(float x = 1.1, float y = 2.2, float z = 3.3){
      AddFloats::x = x;
      AddFloats::y = y;
      AddFloats::z = z;
    } // end constructor
    float getSum(){
      return x + y + z;
    } // end getSum
}; // end AddInts class def

template <typename T>
class AddThings {
  private:
    T x, y, z;
  public:
    AddThings(T x, T y, T z){
      AddThings::x = x;
      AddThings::y = y;
      AddThings::z = z;
    } // end constructor

    T getSum(){
      return x + y + z;
    } // end getSum
}; // end template def

int main(){
  AddInts ai;
  std::cout << ai.getSum() << std::endl;

  AddFloats af;
  std::cout << af.getSum() << std::endl;

  AddThings<int> ati(4, 5, 6);
  std::cout << ati.getSum() << std::endl;

  AddThings<float> atf(3.1, 4.2, 5.6);
  std::cout << atf.getSum() << std::endl;

  AddThings<std::string> ats("this ", "is ", "fun!");
  std::cout << ats.getSum() << std::endl;
}

//vectorDemo

#include <vector>
#include <iostream>

int main(){

  //you don't need to specify the length of a vector!
  //however, you do need to specify the type
  std::vector<int> a;

  //use push_back to add an element to the end of a vector
  a.push_back(1);
  a.push_back(2);
  a.push_back(3);

  //You can access a vector
  std::cout << a[2] << std::endl;

  //remove an element with pop_back
  a.pop_back();

  //insert to add an element to an arbitrary spot
  //use begin() and end() to get key positions
  a.insert(a.end(), 300);
  a.insert(a.begin() + 1, 4);
  //inserting an element moves later elements

  std::cout << a[2] << std::endl << std::endl;

  //iterating through the vector the old-fashioned way.
  std::vector<int>::iterator it;
  for(it = a.begin(); it < a.end(); it++){
    std::cout << *it << std::endl;
  } // end for loop
  std::cout << std::endl;

  //'modern' iteration in c++ 11+ 

  for (auto& item: a){
    std::cout << item << ", ";
  } // end for
  std::cout << std::endl;


  return 0;
} // end main


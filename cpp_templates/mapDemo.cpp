//mapDemo

#include <map>
#include <iostream>

int main(){
  std::map<std::string, std::string> stateCap;
  stateCap["Indiana"] = "Indianapolis";
  stateCap["Florida"] = "Tallahasee";

  std::cout << stateCap["Indiana"] << std::endl;

  return 0;
} // end main




//basicClass.cpp

#include <iostream>
#include <string>

class Student {
    private:
        std::string name;
    public:
        Student(){
            name = "anonymous";
        }

        void setName(std::string tName){
            name = tName;
        } // end setName

        std::string getName(){
            return name;
        } // end getName
}; // end class def
//don't forget semicolon at end of class def!


int main(){
    Student s1;
    std::cout << "Name: " << s1.getName() << std::endl;
    s1.setName("John");
    std::cout << "Name: " << s1.getName() << std::endl;

    return 0;
} // end main

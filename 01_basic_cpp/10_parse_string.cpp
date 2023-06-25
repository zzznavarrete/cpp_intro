/*
Steps for using Stringstream:

    Include the Stringstream library. #include
    Use getline to get the string from the user std::getline(std::cin, stringVariable);
    Convert the string variable to a float variable. std::stringstream(stringVariable) >> numericVariable;
*/

#include <iostream>
#include <string>
#include <sstream>



int main(){


    std::string stringAge;
    int age = 0;


    std::cout<<"Enter your age:\n";
    std::getline(std::cin, stringAge);
    std::stringstream(stringAge) >> age;

    std::cout<<"Your half age is "<< age/2;

    return 0;
}
/*Now I would like you to do a switch statement with breaks
**between the cases. Create a program that asks the user for
**two float numbers. Then asks the user if they would like to:
**add the numbers, subtract the numbers, multiply the numbers, 
**divide the numbers.
**The program should then print the numbers with the chosen
**operation and the solution. 
*/

#include <iostream>
#include <string>

int main()
{
    float in1, in2;
    std::cout<<"Enter two numbers:\n";
    std::cin>>in1;
    std::cin>>in2;


    /*
    The issue is that after entering the two numbers, 
    the newline character (\n) is left in the input buffer, 
    and std::getline() immediately reads it without waiting for
    further input from the user. As a result, it assigns an empty 
    string to the operation variable, and none of the subsequent if 
    conditions match.
    */
    std::cin.ignore(); // Clear the newline character from the input buffer

    std::cout<<"Enter the operation '+','-','*','/': \n";
    std::string operation;
    getline(std::cin, operation);
    std::cout<<operation;

    if (operation == "+") {
        std::cout << in1 << " " << operation << " " << in2 << " = " << in1 + in2 << std::endl;
    }
    else if (operation == "-") {
        std::cout << in1 << " " << operation << " " << in2 << " = " << in1 - in2 << std::endl;
    }
    else if (operation == "*") {
        std::cout << in1 << " " << operation << " " << in2 << " = " << in1 * in2 << std::endl;
    }
    else if (operation == "/") {
        std::cout << in1 << " " << operation << " " << in2 << " = " << in1 / in2 << std::endl;
    }
    else {
        std::cout << "Invalid operation" << std::endl;
    }


    return 0;
}
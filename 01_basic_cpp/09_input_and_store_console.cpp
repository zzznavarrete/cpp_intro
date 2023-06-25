#include <string>
#include <iostream>



int main(){

    std::string userName;

    std::cout << "Tell me your name \n";    
    getline(std::cin, userName);
    std::cout << userName;

    return 0;
}
#include <iostream>
#include <string>

int main(){

    std::cout<<"Give me your name: \n";
    std::string name;
    getline(std::cin, name);

    std::cout<<"Give me your address: \n";
    std::string address;
    getline(std::cin, address);


    std::string phone;
    std::cout<<"Give me your phone: \n";
    getline(std::cin,phone);

    std::cout<<name<<"\/t\t/"<<address<<"\/t\t/"<<phone;


    return 0;
}
/*
Pointers, which are the addresses of variables, can be accessed in C++.

For example in this code snippet:
     int a = 54;


54 is the value of the variable, in other words, it is the value that is stored in the location reserved the the variable called 'a'.
Now, let's ask ourselves, where is a? The location of 'a' can be found using a pointer!
     int a = 54;
     std::cout<< &a<<"\n"; //This will print the LOCATION of 'a'


*/

#include <iostream>

int main(){
    
    int a = 54;
    std::cout<<"a = "<<a<<std::endl;
    std::cout<<"address of a is at &a = "<<&a<<std::endl;

    return 0;
}
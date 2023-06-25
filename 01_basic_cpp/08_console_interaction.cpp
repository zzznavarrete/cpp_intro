/*
As we have seen we can include additional libraries in C++, we can also include our own libraries.

Traditionally, these files are called header files and they have an .hpp extension. Although any extension will work.

    Header files contain information about how to do a task.
    The main program contains information about what to do. 

Let’s see how a header file works with a simple hello world program.

We have a simple hello world program. We can test this, and the program runs.

Below I have included a screenshot of the programming quiz interface. Note that there is a main.cpp and a main.hpp.

    main.cpp: all the code on **what** the program does goes in this file.
    main.hpp: all the code on **how** the program does a task goes in this file. 
*/

#include <string>
#include <iostream>

int main(){

    int year = 0;
    int age = 0;
    std::string name = " ";
    std::cout<<"What is your name?\n";
    std::cin>>name;
    std::cout<<"Hello "<<name;

    return 0;
}
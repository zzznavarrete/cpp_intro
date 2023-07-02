/*
For this program print for each variable print the value of the variable, 
then print the address where it is stored. 
*/

#include <iostream>
#include <string>
#include <fstream>

int main(){

    int givenInt;
    float givenFloat;
    double givenDouble ;
    std::string givenString;
    char givenChar;


    std::string line;
    // create an input stream to read the file
    std::ifstream myfileO("02_pointers_homework.txt");

    int enumerator_ = 0;

    if(myfileO.is_open()){
        while(getline(myfileO, line)){
            switch(enumerator_){
                case(0):{
                    givenInt = std::stoi(line);
                    std::cout<<givenInt<<std::endl;
                    std::cout<<&givenInt<<std::endl;
                    break;
                }
                case(1):{
                    givenFloat = std::stof(line);
                    std::cout<<givenFloat<<std::endl;
                    std::cout<<&givenFloat<<std::endl;
                    break;
                }
                case(2):{
                    givenDouble = std::stod(line);
                    std::cout<<givenDouble<<std::endl;
                    std::cout<<&givenDouble<<std::endl;
                    break;
                }
                case(3):{
                    givenChar = line[0];
                    std::cout<<givenChar<<std::endl;
                    std::cout<< (void *) &givenChar<<std::endl;
                    break;
                }
                case(4):{
                    givenString = line;
                    std::cout<<givenString<<std::endl;
                    std::cout<<&givenString<<std::endl;
                    break;
                }
                default:
                    break;
            }

            enumerator_+=1;

        }
        myfileO.close();
    }


    return 0;
}
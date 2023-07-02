
#include <iostream>
#include <string>

int main(){

    int guess= 0;
    int target = 55;

    while(guess != target && guess != -1){
        
        std::cout<<"Enter the guess: ";
        std::cin>>guess;
        
        if (guess > target){
            std::cout<<"Too high!\n";
        }else if (guess < target){
            std::cout<<"Too low!\n";
        }
        
    }

    if (guess == target){
        std::cout<<"You are right! the number is "<<target;
    }
    else{
        std::cout<<"You press -1, game is over";
    }
    

    return 0;
}
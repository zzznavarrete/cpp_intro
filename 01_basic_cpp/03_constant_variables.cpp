#include <iostream>

int main(){
    const int weightGoal = 100;

    std::cout<<"weight goal ="<<weightGoal<<"\n";
    //weightGoal = 200; <- this cannot be done 'cause the const variables are fixed values
    std::cout<<"weight goal = "<<weightGoal<<"\n";
    return 0;

}
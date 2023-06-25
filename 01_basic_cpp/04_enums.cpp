/*
C++ also allows for enumerated constants.
 This means the programmer can create a new variable type and then assign a finite number of values to it. 
 Here is the form of the enum keyword:
*/

#include <iostream>

int main(){
    // Define months as having 12 possibles values
    enum MONTHS {Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};

    // define bestMonth as a variable type MONTHs
    MONTHS bestMonth;

    // Assign bestMonth one of the values of Months
    bestMonth = Sep;

    // now we can check the value of bestMonths just like any other variable
    if(bestMonth == Sep){
        std::cout<<"The best month is September \n";
    }

    return 0;

}
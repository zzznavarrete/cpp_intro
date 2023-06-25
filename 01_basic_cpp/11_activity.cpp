#include "11_main.hpp"

 int main()
 {
   float FTempInt = 0;
   float CTemp = 0;

   cout<< "Enter a Farenheit temperature: ";
   cin>> FTempInt;
    
   string FTempString;
   stringstream(FTempString) >> FTempInt;

   CTemp = (FTempInt - 32.0) / (9.0/5.0);
   cout<<FTempInt<<" in Farenheit = "  << CTemp <<" in Celsius\n";

   return 0;
 }
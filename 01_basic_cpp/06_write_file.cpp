/*
File IO Steps:
    0. include the <fstream> library,
    - ofstream myfile; <-- (for writting to a file)
    - ifstream myfile; <-- (for reading a file)
    - fstream myfile; <-- (for reading and writing a file)
    2. open the file myfile.open('filename');
    3. Write or read the file.

*/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    string line;

    // create an output stream to write to the file
    // append the new lines to the end of the file
    ofstream myfileI("input.txt", ios::app);
    if(myfileI.is_open()){
        myfileI << "\n I am adding a line. \n";
        myfileI << "\n I am another file.\n" ;
        myfileI.close();
    }
    else cout << "Unable to open file for writing";

    // create an input stream to read the file
    ifstream myfileO("input.txt");

    // During the creation of ifstream, the file is opened.
    // So we do not have to explicitly open the file.
    if(myfileI.is_open()){
        while(getline(myfileO, line)){
            cout << line << '\n';
        }
        myfileO.close();
    }

    else cout << "Unable to open file for reading";

    return 0;
    
}
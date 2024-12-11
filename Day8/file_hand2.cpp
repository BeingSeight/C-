#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    string line;
    // open a text file for writing
    ifstream my_file("abc.txt");


    // check the file for errors
    if(!my_file){
        cout<< "Error opening file" << endl;
        return 1;
    }


    // read multiple lines to the file
    while(getline(my_file, line))
    {
        cout << line << '\n';
    }


    // close the file
    my_file.close();
    return 0;
}
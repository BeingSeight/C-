#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // open a text file for errors
    ofstream my_file("abc.txt");
    
    // check the file for errors
    if (my_file.fail()){
        cout << "Error opening file" << endl;
        return 1;
    }

    // write the multiple lines to the file
    my_file << "Hello" << endl;
    my_file << "World" << endl;
    my_file << "Goodbye" << endl;
    my_file << "C++" << endl;

    // close the file
    my_file.close();
    return 0;
}
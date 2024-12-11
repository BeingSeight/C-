#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    string line;
    fstream file;

    file.open("abc.txt",ios::out);
    file<<"Hello Btech Students";
    file.close();

    file.open("abc.txt",ios::in);
    while(getline(file,line))
    {
        cout<<line<<'\n';
    }
    file.close();
    return 0;
}
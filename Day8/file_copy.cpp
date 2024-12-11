#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main(){
    // copy from one file to another
    string line;
    ifstream in("input.txt");
    ofstream out("output.txt");
    while(getline(in,line)){
        out<<line<<endl;
    }
    in.close();
    out.close();
    return 0;
}
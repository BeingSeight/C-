# include <iostream>
using namespace std;

int main()
{
    int roll;
    string sname;
    float fees;
    long contact;

    cout<<"Enter you roll no, name, contact and fees :"<<endl;
    cin>>roll>>sname>>contact>>fees;
    
    cout<<"================================\n";
    cout<<"\t Student's Details"<<endl;
    cout<<"================================\n";

    cout<<"Roll no: "<<roll<<endl;
    cout<<"Name: "<<sname<<endl;
    cout<<"Contact: "<<contact<<endl;
    cout<<"Fees: "<<fees<<endl; 
}

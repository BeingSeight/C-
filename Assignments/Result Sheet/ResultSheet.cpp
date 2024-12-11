/*
Create Result-sheet Program

   Using student class, having data :

       roll, name, sub1, sub2, sub3, total



   Create 5 students objects using array

   Display Result-sheet in following format:

   

   =========================================

   Roll No.    Name    S1     S2    S3     Total

   =========================================

   1        A    

   2        B

   3        C

   4        D

   5        E
   */

   #include <iostream>
#include <string>

using namespace std;

class Student {
public:
    int roll;
    string name;
    int sub1, sub2, sub3;
    int total;

    Student(int roll, string name, int sub1, int sub2, int sub3) {
        this->roll = roll;
        this->name = name;
        this->sub1 = sub1;
        this->sub2 = sub2;
        this->sub3 = sub3;
        this->total = sub1 + sub2 + sub3;
    }

    void display() {
        cout << roll << "\t" << name << "\t" << sub1 << "\t" << sub2 << "\t" << sub3 << "\t" << total << endl;
    }
};

int main() {
    // Create 5 students objects using array
    Student students[5] = {
        Student(1, "A", 80, 70, 90),
        Student(2, "B", 90, 80, 70),
        Student(3, "C", 70, 90, 80),
        Student(4, "D", 85, 75, 95),
        Student(5, "E", 95, 85, 75)
    };

    // Display Result-sheet
    cout << "=========================================" << endl;
    cout << "Roll No.\tName\tS1\tS2\tS3\tTotal" << endl;
    cout << "=========================================" << endl;

    for (int i = 0; i < 5; i++) {
        students[i].display();
    }

    return 0;
}
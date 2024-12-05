#include <iostream>
using namespace std;

void display(int n[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << n[i] << "\t";
    }
}

int main() {
    int a[] = {10, 20, 30, 40, 50};
    display(a, 5);
    return 0;
}
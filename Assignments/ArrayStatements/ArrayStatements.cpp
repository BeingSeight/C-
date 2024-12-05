// 1. Write  program to find the maximum and minimum value of an array

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int min, max;
    cout << "Enter the 5 elements of the array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    min = arr[0];
    max = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    cout << "The maximum number is: " << max << endl;
    cout << "The minimum number is: " << min << endl;
    return 0;
}






// 2. Write  program to reverse an array of integer values

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    cout << "Enter the 5 elements of the array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 4; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}




// 3. Write  program to find the number of even and odd integers in a given array of integers

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int even = 0, odd = 0;
    cout << "Enter the 5 elements of the array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    cout << "Number of even integers: " << even << endl;
    cout << "Number of odd integers: " << odd << endl;
    return 0;
}

// 4. Write  program to test if an array contains a specific value & the index of that array element

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int value;
    int found = 0;
    cout << "Enter the 5 elements of the array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the value to be searched: ";
    cin >> value;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == value)
        {
            cout << "Value found at index: " << i << endl;
            found = 1;
            break;
        }
    }
    if (found == 0)
    {
        cout << "Value not found in the array." << endl;
    }
    return 0;
}








// 5. Write  program to copy an array by reversing the array

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int rev[5];
    cout << "Enter the 5 elements of the array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++)
    {
        rev[i] = arr[4 - i];
    }
    for (int i = 0; i < 5; i++)
    {
        cout << rev[i] << " ";
    }
    return 0;
}






// 6. Write  program to find the second largest element in an array

#include <iostream>
using namespace std;

int main()
{
    int arr[5];
    int max1, max2;
    cout << "Enter the 5 elements of the array: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    max1 = arr[0];
    max2 = arr[0];
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] > max1)
        {
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2 && arr[i] < max1)
        {
            max2 = arr[i];
        }
    }
    cout << "The second largest number is: " << max2 << endl;
    return 0;
}









// 7. Take 20 integer inputs from user and print number of positive numbers

#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    int count = 0;
    cout << "Enter 20 integers: ";
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] > 0)
        {
            count++;
        }
    }
    cout << "Number of positive integers: " << count << endl;
    return 0;
}



// Take 20 integer inputs from user and print number of  negative numbers

#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    int count = 0;
    cout << "Enter 20 integers: ";
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] < 0)
        {
            count++;
        }
    }
    cout << "Number of negative integers: " << count << endl;
    return 0;
}






// Take 20 integer inputs from user and print number of odd numbers

#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    int count = 0;
    cout << "Enter 20 integers: ";
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    cout << "Number of odd integers: " << count << endl;
    return 0;
}






// Take 20 integer inputs from user and print number of even numbers

#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    int count = 0;
    cout << "Enter 20 integers: ";
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    cout << "Number of even integers: " << count << endl;
    return 0;
}






// Take 20 integer inputs from user and print number of zeros

#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    int count = 0;
    cout << "Enter 20 integers: ";
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }
    cout << "Number of zeros: " << count << endl;
    return 0;
}






// Take 20 integer inputs from user and print Matrix Multiplication

#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    int count = 0;
    cout << "Enter 20 integers: ";
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }
    cout << "Number of zeros: " << count << endl;
    return 0;
}






// Take 20 integer inputs from user and print Matrix Transpose

#include <iostream>
using namespace std;

int main()
{
    int arr[20];
    int count = 0;
    cout << "Enter 20 integers: ";
    for (int i = 0; i < 20; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < 20; i++)
    {
        if (arr[i] == 0)
        {
            count++;
        }
    }
    cout << "Number of zeros: " << count << endl;
    return 0;
}
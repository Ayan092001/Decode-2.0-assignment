// WAP to find the smallest missing positive element in the sorted Array that contains only positive
// elements.
#include <iostream>
using namespace std;

int main()
{
    cout << "Enter 5 elements of the array:" << endl;
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    
    int x = 0;
    bool flag = false;
    for (int i = 0; i < 5; i++)  // Changed `n` to `5`
    {
        if (a[i] != x)  // Checking if the current element is not equal to x
        {
            cout << x << endl;  // If not, print x
            flag = true;        // Set flag to true indicating missing number found
            break;
        }
        else
        {
            x++;  // Increment x if the number is found
        }
    }
    if (!flag)  // If no missing number was found, print the next number
        cout << x << endl;
    
    return 0;
}

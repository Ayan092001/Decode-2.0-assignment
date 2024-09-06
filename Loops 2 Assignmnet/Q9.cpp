// Write a program to print out all Armstrong numbers between 1 and 500. If the sum of cubes of each digit of the number is equal to the number itself, then the number is called an Armstrong number.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 1; i <= 500; i++)
    {
        int x = 0, temp = i;
        while (temp > 0)
        {
            int m = temp % 10;
            x += m * m * m;
            temp /= 10;
        }
        if (i == x)
        {
            cout << i << endl;
        }
    }
}
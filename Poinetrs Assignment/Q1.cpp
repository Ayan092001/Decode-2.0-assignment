// Write a program to find out the product of two numbers using pointers.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, y;
    cin >> x >> y;
    int *ptrX, *ptrY;
    ptrX = &x;
    ptrY = &y;
    int ans;
    int *ptrAns = &ans;
    *ptrAns = (*ptrX) * (*ptrY);
    cout << *ptrAns << endl;
    return 0;
}
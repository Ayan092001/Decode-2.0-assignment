// Write a program to print the sum of all odd numbers from a to b (inclusive) using
// recursion.

#include <iostream>
using namespace std;

int sumOdd(int a, int b) {
    if (a > b) return 0;
    if (a % 2 == 1) return a + sumOdd(a + 1, b);
    return sumOdd(a + 1, b);
}

int main() {
    int a, b;
    cout << "Enter the values for a and b: ";
    cin >> a >> b;
    cout << "The sum of odd numbers from " << a << " to " << b << " is " << sumOdd(a, b) << endl;
    return 0;
}

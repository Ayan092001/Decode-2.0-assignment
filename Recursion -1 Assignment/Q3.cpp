// Given a positive integer, return true if it is a power of 2 using recursion.

#include <iostream>

using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    if (n == 1) return true;
    if (n % 2 != 0) return false;
    return isPowerOfTwo(n / 2);
}

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (isPowerOfTwo(number)) {
        cout << number << " is a power of 2.\n";
    } else {
        cout << number << " is not a power of 2.\n";
    }

    return 0;
}

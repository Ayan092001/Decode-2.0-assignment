// Given a number ‘n’. Predict whether ‘n’ is a valid perfect square or not.
// Input 1: n = 36
// Output 1: yes
// Input 2: n = 45

// Output 2: no


#include <iostream>
using namespace std;

bool isPerfectSquare(int n) {
    if (n < 0) return false;
    int left = 0, right = n;
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        long long square = mid * mid;
        if (square == n) return true;
        if (square < n) left = mid + 1;
        else right = mid - 1;
    }
    return false;
}

int main() {
    int n1 = 36, n2 = 45;
    cout << (isPerfectSquare(n1) ? "yes" : "no") << endl;
    cout << (isPerfectSquare(n2) ? "yes" : "no") << endl;
    return 0;
}

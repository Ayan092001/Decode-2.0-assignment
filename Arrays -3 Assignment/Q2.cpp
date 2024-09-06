// Find the factorial of a large number.

#include <iostream>
#include <vector>
using namespace std;

void multiply(vector<int> &result, int number) {
    int carry = 0;
    for (int i = 0; i < result.size(); i++) {
        int product = result[i] * number + carry;
        result[i] = product % 10;
        carry = product / 10;
    }
    while (carry) {
        result.push_back(carry % 10);
        carry /= 10;
    }
}

void factorial(int n) {
    vector<int> result;
    result.push_back(1);
    for (int i = 2; i <= n; i++) {
        multiply(result, i);
    }
    cout << "Factorial of " << n << " is: ";
    for (int i = result.size() - 1; i >= 0; i--) {
        cout << result[i];
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter a number to find its factorial: ";
    cin >> n;
    if (n < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        factorial(n);
    }
    return 0;
}


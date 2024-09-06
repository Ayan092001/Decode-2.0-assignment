// Input a string of length less than 10 and convert it into integer without using builtin function.

#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string of length less than 10: ";
    cin >> str;

    int number = 0;
    for (char ch : str) {
        number = number * 10 + (ch - '0');
    }

    cout << "Converted integer: " << number << endl;
    return 0;
}

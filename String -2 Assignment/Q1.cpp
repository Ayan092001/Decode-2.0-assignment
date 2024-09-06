// Input a string and concatenate with its reverse string and print it.

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());

    string concatenated = str + reversedStr;

    cout << "Concatenated string: " << concatenated << endl;
    return 0;
}

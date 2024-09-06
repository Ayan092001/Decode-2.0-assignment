// Input a string of even length and reverse the second half of the string.

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string str;
    cout << "Enter an even length string: ";
    cin >> str;

    int n = str.length();
    reverse(str.begin() + n / 2, str.end());

    cout << "Modified string: " << str << endl;
    return 0;
}

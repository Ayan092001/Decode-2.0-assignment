// Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
// 0-based indexing.

#include <iostream>
using namespace std;

void updateOddPositions(string &str) {
    for (int i = 1; i < str.length(); i += 2) {
        str[i] = '#';
    }
}

int main() {
    string str;
    cout << "Enter the string: ";
    getline(cin, str);

    updateOddPositions(str);

    cout << "Updated string: " << str << endl;

    return 0;
}

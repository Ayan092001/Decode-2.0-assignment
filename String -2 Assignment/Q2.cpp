// Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.

#include <iostream>
#include <set>
using namespace std;

int main() {
    string str;
    cout << "Enter a string consisting of digits from '0' to '9': ";
    cin >> str;

    set<int> digits;
    for (char ch : str) {
        digits.insert(ch - '0');
    }

    if (digits.size() < 2) {
        cout << "Second largest digit not found." << endl;
    } else {
        auto it = digits.rbegin();
        it++;
        cout << "Second largest digit: " << *it << endl;
    }

    return 0;
}

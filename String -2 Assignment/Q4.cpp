// Given an array of strings. Check whether they are anagram or not.

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool areAnagrams(const vector<string>& strs) {
    if (strs.empty()) return true;

    string sortedStr = strs[0];
    sort(sortedStr.begin(), sortedStr.end());

    for (const string& str : strs) {
        string temp = str;
        sort(temp.begin(), temp.end());
        if (temp != sortedStr) return false;
    }

    return true;
}

int main() {
    int n;
    cout << "Enter the number of strings: ";
    cin >> n;

    vector<string> strs(n);
    cout << "Enter the strings: ";
    for (int i = 0; i < n; i++) {
        cin >> strs[i];
    }

    if (areAnagrams(strs)) {
        cout << "All strings are anagrams." << endl;
    } else {
        cout << "Strings are not anagrams." << endl;
    }

    return 0;
}

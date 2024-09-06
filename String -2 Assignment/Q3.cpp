// Input a string and return the number of substrings that contain only vowels.

#include <iostream>
#include <set>
using namespace std;

int countVowelSubstrings(const string& str) {
    set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
    int count = 0, n = str.length();

    for (int i = 0; i < n; i++) {
        if (vowels.count(str[i])) {
            for (int j = i; j < n && vowels.count(str[j]); j++) {
                count++;
            }
        }
    }

    return count;
}

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int result = countVowelSubstrings(str);

    cout << "Number of substrings containing only vowels: " << result << endl;
    return 0;
}

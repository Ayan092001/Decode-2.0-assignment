// Input a string of length n and count all the consonants in the given string.


#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int n;
    cout << "Enter the length of the string: ";
    cin >> n;

    string str;
    cout << "Enter the string: ";
    cin >> str;

    int consonantCount = 0;
    for (char ch : str) {
        ch = tolower(ch);
        if (isalpha(ch) && !(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')) {
            consonantCount++;
        }
    }

    cout << "Number of consonants: " << consonantCount << endl;
    return 0;
}

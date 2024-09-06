// Given a sentence ‘str’, return the word that is lexicographically maximum.

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

string findMaxLexicographicalWord(const string& str) {
    istringstream iss(str);
    string word, maxWord;
    while (iss >> word) {
        if (word > maxWord) {
            maxWord = word;
        }
    }
    return maxWord;
}

int main() {
    string str;
    cout << "Enter a sentence: ";
    getline(cin, str);

    string maxWord = findMaxLexicographicalWord(str);

    cout << "The lexicographically maximum word is: " << maxWord << endl;
    return 0;
}

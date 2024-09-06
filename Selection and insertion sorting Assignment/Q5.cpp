// Given an array of strings arr[] with all strings in lowercase. Sort given strings using Bubble Sort
// and display the sorted array.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void bubbleSortStrings(vector<string>& arr) {
    size_t n = arr.size();
    for (size_t i = 0; i < n - 1; ++i) {
        for (size_t j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Swap arr[j] and arr[j + 1]
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    vector<string> arr = {"banana", "apple", "grape", "date"};

    bubbleSortStrings(arr);

    cout << "Sorted array of strings:" << endl;
    for (const string& str : arr) {
        cout << str << " ";
    }
    cout << endl;

    return 0;
}

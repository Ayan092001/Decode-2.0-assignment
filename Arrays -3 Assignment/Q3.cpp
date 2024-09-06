// Find the first non-repeating element in the array .

#include <iostream>
#include <unordered_map>
using namespace std;

int firstNonRepeating(int arr[], int n) {
    unordered_map<int, int> frequency;
    for (int i = 0; i < n; i++) {
        frequency[arr[i]]++;
    }
    for (int i = 0; i < n; i++) {
        if (frequency[arr[i]] == 1) {
            return arr[i];
        }
    }
    return -1;
}

int main() {
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int result = firstNonRepeating(arr, n);
    if (result != -1) {
        cout << "The first non-repeating element is: " << result << endl;
    } else {
        cout << "There is no non-repeating element in the array." << endl;
    }

    return 0;
}

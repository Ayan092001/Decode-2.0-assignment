// Sort the array in descending order using Bubble Sort.

#include <iostream>
using namespace std;

void bubbleSortDescending(int arr[], int n) {
    bool swapped;
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] < arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
        if (!swapped) {
            break;
        }
    }
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSortDescending(arr, n);

    cout << "Sorted array in descending order: \n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
        cout << endl;

    return 0;
}

// Q4: Write a C++ program to find the largest element of a given 2D array of integers.

#include <iostream>
using namespace std;

int findLargestElement(int arr[][100], int n, int m) {
    int largest = arr[0][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] > largest) {
                largest = arr[i][j];
            }
        }
    }
    return largest;
}

int main() {
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;

    int arr[100][100];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int largest = findLargestElement(arr, n, m);
    cout << "The largest element in the array is: " << largest << endl;

    return 0;
}

// Q5: Write a program to print the row number having the maximum sum in a given matrix.

#include <iostream>
using namespace std;

int rowWithMaxSum(int arr[][100], int n, int m) {
    int maxSum = 0;
    int maxRow = 0;
    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < m; j++) {
            rowSum += arr[i][j];
        }
        if (rowSum > maxSum) {
            maxSum = rowSum;
            maxRow = i;
        }
    }
    return maxRow;
}

int main() {
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;

    int arr[100][100];
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }

    int maxRow = rowWithMaxSum(arr, n, m);
    cout << "The row with the maximum sum is: " << maxRow << endl;

    return 0;
}

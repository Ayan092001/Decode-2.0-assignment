// Given a positive integer n, generate a n x n matrix filled with elements from 1 to n2 in spiral order.

#include <iostream>
using namespace std;

void generateSpiralMatrix(int arr[][100], int n) {
    int value = 1;
    int top = 0, bottom = n - 1, left = 0, right = n - 1;
    
    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            arr[top][i] = value++;
        }
        top++;
        for (int i = top; i <= bottom; i++) {
            arr[i][right] = value++;
        }
        right--;
        for (int i = right; i >= left; i--) {
            arr[bottom][i] = value++;
        }
        bottom--;
        for (int i = bottom; i >= top; i--) {
            arr[i][left] = value++;
        }
        left++;
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;

    int arr[100][100];
    generateSpiralMatrix(arr, n);

    cout << "Matrix in spiral order: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

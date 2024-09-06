// Write a program to print the matrix in wave form.


#include <iostream>
using namespace std;

void printMatrixInWaveForm(int arr[][100], int rows, int cols) {
    for (int j = 0; j < cols; j++) {
        if (j % 2 == 0) {
            for (int i = 0; i < rows; i++) {
                cout << arr[i][j] << " ";
            }
        } else {
            for (int i = rows - 1; i >= 0; i--) {
                cout << arr[i][j] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns: ";
    cin >> rows >> cols;

    int arr[100][100];
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> arr[i][j];
        }
    }

    printMatrixInWaveForm(arr, rows, cols);

    return 0;
}

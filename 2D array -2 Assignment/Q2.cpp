// Write a program to rotate the matrix by 90 degrees anti-clockwise.


#include <iostream>
using namespace std;

void rotateMatrixAntiClockwise(int arr[][100], int size) {
    int temp[100][100];
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            temp[size - 1 - j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = temp[i][j];
        }
    }
}

int main() {
    int size;
    cout << "Enter the size of the square matrix: ";
    cin >> size;

    int arr[100][100];
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> arr[i][j];
        }
    }

    rotateMatrixAntiClockwise(arr, size);

    cout << "Matrix after 90 degrees anti-clockwise rotation: ";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
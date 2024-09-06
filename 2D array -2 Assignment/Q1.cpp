// Write a program to print the elements of both the diagonals in a square matrix.


#include <iostream>
using namespace std;

void printDiagonals(int arr[][100], int size) {
    cout << "Primary diagonal elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i][i] << " ";
    }
    cout << endl;

    cout << "Secondary diagonal elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i][size - 1 - i] << " ";
    }
    cout << endl;
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

    printDiagonals(arr, size);

    return 0;
}
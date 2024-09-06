// Q6: Write a function which accepts a 2D array of integers and its size as arguments and displays the
// elements of middle row and the elements of middle column.
// [Assuming the 2D Array to be a square matrix with odd dimensions i.e. 3x3, 5x5, 7x7 etc...]

#include <iostream>
using namespace std;

void displayMiddleRowAndColumn(int arr[][100], int size) {
    int mid = size / 2;
    
    cout << "Middle row elements: ";
    for (int j = 0; j < size; j++) {
        cout << arr[mid][j] << " ";
    }
    cout << endl;
    
    cout << "Middle column elements: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i][mid] << " ";
    }
    cout << endl;
}

int main() {
    int size;
    cout << "Enter the size of the square matrix (odd number): ";
    cin >> size;

    int arr[100][100];
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> arr[i][j];
        }
    }

    displayMiddleRowAndColumn(arr, size);

    return 0;
}

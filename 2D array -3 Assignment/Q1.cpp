// Given an m x n integer matrix matrix, if an element is 0, set its entire row and column to 0's.

#include <iostream>
using namespace std;

void setZeroes(int matrix[][100], int m, int n) {
    bool rowZero[m] = {false};
    bool colZero[n] = {false};

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == 0) {
                rowZero[i] = true;
                colZero[j] = true;
            }
        }
    }

    for (int i = 0; i < m; i++) {
        if (rowZero[i]) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = 0;
            }
        }
    }

    for (int j = 0; j < n; j++) {
        if (colZero[j]) {
            for (int i = 0; i < m; i++) {
                matrix[i][j] = 0;
            }
        }
    }
}

int main() {
    int m, n;
    cout << "Enter the number of rows and columns: ";
    cin >> m >> n;

    int matrix[100][100];
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    setZeroes(matrix, m, n);

    cout << "Matrix after setting rows and columns to zero: ";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

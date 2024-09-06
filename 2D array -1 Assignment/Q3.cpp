// Q3: Given a matrix ‘A’ of dimension n x m and 2 coordinates (l1, r1) and (l2, r2). Return the sum of the
// rectangle from (l1,r1) to (l2, r2).

#include <iostream>
using namespace std;

int rectangleSum(int A[][100], int n, int m, int l1, int r1, int l2, int r2) {
    int sum = 0;
    for (int i = l1; i <= l2; i++) {
        for (int j = r1; j <= r2; j++) {
            sum += A[i][j];
        }
    }
    return sum;
}

int main() {
    int n, m;
    cout << "Enter the number of rows and columns: ";
    cin >> n >> m;

    int A[100][100];
    cout << "Enter the elements of the matrix: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> A[i][j];
        }
    }

    int l1, r1, l2, r2;
    cout << "Enter the coordinates (l1, r1) and (l2, r2): ";
    cin >> l1 >> r1 >> l2 >> r2;

    int result = rectangleSum(A, n, m, l1, r1, l2, r2);
    cout << "Sum of the rectangle is: " << result << endl;

    return 0;
}

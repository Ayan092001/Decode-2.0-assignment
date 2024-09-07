// Given a matrix having 0-1 only where each row is sorted in increasing order, find the row with the
// maximum number of 1’s.
// Input matrix : 0 1 1 1
// 0 0 1 1
// 1 1 1 1 // this row has maximum 1s
// 0 0 0 0
// Output: 2

#include <iostream>
#include <vector>
using namespace std;

int rowWithMaxOnes(vector<vector<int>>& matrix) {
    int maxOnesRow = -1, maxOnes = 0, n = matrix.size(), m = matrix[0].size(), j = m - 1;
    for (int i = 0; i < n; ++i) {
        while (j >= 0 && matrix[i][j] == 1) {
            --j;
            maxOnesRow = i;
        }
    }
    return maxOnesRow;
}

int main() {
    vector<vector<int>> matrix = {
        {0, 1, 1, 1},
        {0, 0, 1, 1},
        {1, 1, 1, 1},
        {0, 0, 0, 0}
    };
    cout << rowWithMaxOnes(matrix);
    return 0;
}

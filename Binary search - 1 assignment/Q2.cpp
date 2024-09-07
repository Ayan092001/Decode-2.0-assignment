// Given a sorted binary array, efficiently count the total number of 1’s in it.
// Input 1 : a = [0,0,0,0,1,1]

// Output 1: 2

#include <iostream>
#include <vector>
using namespace std;

int countOnes(const vector<int>& a) {
    int left = 0, right = a.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (a[mid] == 1) {
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }
    return a.size() - left;
}

int main() {
    vector<int> a = {0, 0, 0, 0, 1, 1};
    cout << countOnes(a);
    return 0;
}

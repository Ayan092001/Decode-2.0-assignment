// Given an integer array and an integer k where k<=size of array, We need to return the kth
// smallest element of the array.

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int kthSmallest(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end());

    return arr[k - 1];
}

int main() {
    vector<int> arr = {7, 10, 4, 3, 20, 15};
    int k = 3; 

    if (k <= 0 || k > arr.size()) {
        cout << "Invalid value for k." << endl;
        return 1;
    }

    int result = kthSmallest(arr, k);

    cout << "The " << k << "-th smallest element is " << result << endl;

    return 0;
}

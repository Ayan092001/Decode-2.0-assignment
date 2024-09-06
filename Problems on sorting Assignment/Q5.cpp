// Given an array, arr[] containing n integers, the task is to find an integer (say K) such that after
// replacing each and every index of the array by |ai – K| where ( i ∈ [1, n]), results in a sorted
// array. If no such integer exists that satisfies the above condition then return -1.

#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

bool isSorted(const vector<int>& arr) {
    for (size_t i = 1; i < arr.size(); ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int findKForSortedArray(vector<int>& arr) {
    // Sort the array to get possible values for K
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());
    
    // Try each unique value in sortedArr as a candidate for K
    for (int K : sortedArr) {
        vector<int> transformedArr;
        for (int num : arr) {
            transformedArr.push_back(abs(num - K));
        }
        if (isSorted(transformedArr)) {
            return K;
        }
    }

    return -1;
}

int main() {
    vector<int> arr = {4, 1, 3, 2}; // Example array

    int result = findKForSortedArray(arr);

    if (result != -1) {
        cout << "The integer K that makes the array sorted is: " << result << endl;
    } else {
        cout << "No such integer K exists." << endl;
    }

    return 0;
}

// Find the minimum operations required to sort the array in increasing order. In one operation ,
// you can set each occurrence of one element to 0.

#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int minOperationsToSort(vector<int>& arr) {
    unordered_set<int> uniqueElements(arr.begin(), arr.end());
    return uniqueElements.size();
}

int main() {
    vector<int> arr = {4, 3, 2, 1, 2, 3, 4}; 

    int result = minOperationsToSort(arr);

    cout << "Minimum operations required to sort the array: " << result << endl;

    return 0;
}

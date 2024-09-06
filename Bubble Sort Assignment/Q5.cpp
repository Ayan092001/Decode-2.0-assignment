#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

bool isAlmostSorted(const vector<int>& arr) {
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    for (size_t i = 0; i < arr.size(); ++i) {
        
        auto it = find(sortedArr.begin(), sortedArr.end(), arr[i]);
        if (it == sortedArr.end()) {
            return false; 
        }
        size_t sortedIndex = distance(sortedArr.begin(), it);
        if (abs(static_cast<int>(i) - static_cast<int>(sortedIndex)) > 1) {
            return false;
        } 
    }
    return true;
}

int main() {
    vector<int> arr = {3, 1, 2, 5, 4}; 
    if (isAlmostSorted(arr)) {
        cout << "The array is almost sorted." << std::endl;
    } else {
        cout << "The array is not almost sorted." << std::endl;
    }
    return 0;
    }
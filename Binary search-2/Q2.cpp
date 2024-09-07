// You have a sorted array of infinite numbers, how would you search an element in the array?

#include <iostream>
#include <vector>
#include <limits>

using namespace std;

int get(int i) {
    static vector<int> arr = {1, 2, 4, 6, 9, 10, 15, 18, 21, 30, 35};
    if (i >= arr.size()) return numeric_limits<int>::max(); 
    return arr[i];
}

int binarySearch(int low, int high, int target) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        int value = get(mid);
        if (value == target) return mid;
        if (value < target) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int findPosition(int target) {
    int index = 1;
    while (get(index) < target) {
        index *= 2;
    }
    int low = index / 2;
    int high = index;
    return binarySearch(low, high, target);
}

int main() {
    int target = 10;
    int result = findPosition(target);
    if (result != -1) cout << "Element found at index " << result << endl;
    else cout << "Element not found" << endl;
    return 0;
}

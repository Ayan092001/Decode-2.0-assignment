#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

pair<int, int> findMinSumNumbers(const vector<int>& digits) {
    vector<int> sortedDigits = digits;
    sort(sortedDigits.begin(), sortedDigits.end(), greater<int>()); 

    int num1 = 0, num2 = 0;
    
  
    for (size_t i = 0; i < sortedDigits.size(); ++i) {
        if (i % 2 == 0) {
            num1 = num1 * 10 + sortedDigits[i];
        } else {
            num2 = num2 * 10 + sortedDigits[i];
        }
    }

    return {num1, num2};
}

int main() {
    vector<int> digits = {4, 6, 8, 1}; 

    pair<int, int> result = findMinSumNumbers(digits);
    int num1 = result.first;
    int num2 = result.second;

    cout << "The two numbers are: " << num1 << " and " << num2 << endl;
    cout << "The minimum possible sum is: " << (num1 + num2) << endl;

    return 0;
}

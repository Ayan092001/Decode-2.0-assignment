// ls Print an increasing-decreasing sequence using recursion
// Example:
// If n = 5, the output should be:
// 1 2 3 4 5 4 3 2 1

#include <iostream>
using namespace std;

void printSequence(int current, int n) {
    if (current > n) return;
    cout << current << " ";
    printSequence(current + 1, n);
    cout << current << " ";
}

int main() {
    int n = 5;
    printSequence(1, n);
    return 0;
}

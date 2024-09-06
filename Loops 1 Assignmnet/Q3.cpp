//Print the table of ‘n’. Here ‘n’ is an integer which the user will input.

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 1; i <= 100; i++) {
		cout << n*i << " ";
	}
}
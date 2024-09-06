// Given the radius of the circle, predict whether numerically the area of this circle is larger than the circumference or not.

#include <iostream>

using namespace std;

int main() {
    int radius;
    cout << "Enter the radius : ";
    cin >> radius;

    float area = 3.14 * radius * radius;
    float circumference = 2 * 3.14 * radius;
    if (area > circumference) cout << "Area is greater than circumference." << endl;
    else cout << "Circumference is greater than area." << endl;
    return 0;
}
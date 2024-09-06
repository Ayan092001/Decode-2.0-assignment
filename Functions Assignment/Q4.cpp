// Q4: Write a function to count the number of digits in a number and then print the square of this number.

#include<iostream>
using namespace std;

int countdigitsquare(int number){
    int count = 0;
    while(number){
        count++;
        number/=10;
    }
    return count*count;
}

int main(){
    int n;
    cin>>n;
    cout<<countdigitsquare(n);
}
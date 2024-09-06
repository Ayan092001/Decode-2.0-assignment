// Q1 : Write a function to print squares of first n natural numbers, taking n as argument to the function

#include<iostream>
using namespace std;
void firstnsquare(int n){
    for(int i=1; i<=n; i++){
        cout<<i*i<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter the n value :";
    cin>>n;
    firstnsquare(n);

}
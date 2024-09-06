// 1. Calculate the product of all the elements in the given array.

#include<iostream>
using namespace std;
int productofArray(int arr[], int n){
    int product = 1;
    for(int i=0; i<=n-1; i++){
        product*=arr[i];
    }
    return product;
}

int main(){
    int n;
    cout<<"Enter the value of n :";
    cin>>n;
    int arr[n];
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    cout<<productofArray(arr,n);
}
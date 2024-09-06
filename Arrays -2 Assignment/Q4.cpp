// Find the difference between the sum of elements at even indices to the sum of elements at odd
// indices.

#include<bits/stdc++.h>
using namespace std;
int evalutediffernce(int a[] , int n){
    int sumE=0, sumO=0;
    for(int i=0; i<n; i++)
    if(i%2==0) sumE+=a[i];
    else sumO+=a[i];
    return (sumE - sumO);
}

int main(){
    int n;
    cout<<"enter the elemnets of arrays :";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    cout<<"The differnce is :"<<evalutediffernce(a , n);
}
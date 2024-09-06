// Given an array of integers, change the value of all odd indexed elements to its second multiple
// and increment all even indexed values by 10.

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"enter the elemnets of arrays :";
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++) cin>>a[i];
    for(int i=0; i<n; i++){
        if(i%2==0){
            a[i]+=10;
        }
        else{
            a[i]=2*a[i];
        }
        cout<<a[i]<<" ";
    }
}
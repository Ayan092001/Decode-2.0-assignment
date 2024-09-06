// 2. Find the second largest element in the given Array in one pass.

#include<iostream>
#include<climits>
using namespace std;
int secondMaxnumber(int arr[], int n){
    int max = INT_MIN;
    int smax = INT_MIN;
    for(int i=0; i<n; i++){
        if(arr[i]>max){
        smax = max;
        max = arr[i];
        }
    else if (smax<arr[i] && arr[i]!=max){
        smax = arr[i];
        }
    }
        return smax;
}

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    cout<<secondMaxnumber(arr,n);
}
// 3.Find the minimum value out of all elements in the array.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the value of n:";
    cin>>n;
    int arr[n];
    for(int i=0; i<=n-1; i++){
        cin>>arr[i];
    }
    int max = arr[0];
    for(int i=1; i<=n-1; i++){
        if(max>arr[i]) max = arr[i];
    }
    cout<<max;
}

// int main(){
//     int n;
//     cout<<"Enter the size of array :";
//     cin>>n;
//     int arr[n];
//     for(int i=0; i<=n-1; i++){
//         cin>>arr[i];
//     }
//     int max = arr[0];
//     for(int i=1; i<=n-1; i++){
//         if(max<arr[i]) max = arr[i];
//     }
//     cout<<max;
// }
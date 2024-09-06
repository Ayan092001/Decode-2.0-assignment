// Count the number of elements strictly greater than x.

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int arr[6];
    cout<<"Enter the elements of array :";
    for(int i=0; i<6; i++){
        cin>>arr[i];
    }
    int x;
    cout<<"Enter the value of x :";
    cin>>x;
    int ans=0;
    for(int i=0; i<6; i++){
        if(arr[i]>x) ans++;
    }
    cout<<ans<<endl;
}
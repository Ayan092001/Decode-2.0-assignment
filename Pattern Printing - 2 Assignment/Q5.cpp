// Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the row no :";
    cin>>n;
    for(int j=1; j<=n; j++){
        cout<<j<<" ";
    }
    for(int k=n-1; k>=1; k--){
        cout<<k<<" ";
    }
    cout<<endl;
    int nsp=1;
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=n-i; j++){
            cout<<j<<" ";
        }
        for(int j=1; j<=nsp; j++){
            cout<<"*"<<" ";
        }
        nsp+=2;
        for(int k=n-i; k>=1; k--){
            cout<<k<<" ";
        }
        cout<<endl;
    }
    return 0;
}
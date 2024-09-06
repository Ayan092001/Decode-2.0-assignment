// Print the following pattern
// Input : n = 4
// Output :
// *     *
// **   **
// *** ***
// *******
// *******
// *** ***
// **   **
// *     *

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the row no :";
    cin>>n;
    int m=2*(n-1)-1;
    int nsp=m;
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        for(int j=1; j<=nsp; j++){
            cout<<" ";
        }
        nsp-=2;
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n-2; i++){
        for(int j=1; j<=2*n-1 ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<" ";
        }
        for(int j=1; j<=n-i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
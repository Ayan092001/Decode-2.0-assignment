// Print the following pattern
// Input : n = 5
// Output:

// *       *
//  *     *
//   *   *
//    * *
//     *     

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the row no :";
    cin>>n;
    int m = n-1;
    int nsp = 2*m-1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i-1; j++){
            cout<<" ";
        }
        cout<<"*";
        for(int j=1; j<=nsp; j++){
            cout<<" ";
        }
        nsp = nsp-2;
        if(i!=n) cout<<"*";
        cout<<endl;
    }
    return 0;
}
// Print the following pattern
// Sample Input : m = 4, n = 6
// Sample Output :
//    *
//   * *
//  *   *
// *     *
//  *   *
//   * *
//    *   

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the row no :";
    cin>>n;
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        cout<<"*";
        for(int k=1; k<=2*(i-1)-1; k++){
            cout<<" ";
        }
        if(i!=1) cout<<"*";
        cout<<endl;
    }
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
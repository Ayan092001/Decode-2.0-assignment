// Print the following pattern
// Sample Input : n = 5
// Output :


//         *
//       * * *
//     *   *   *
//   *     *     *
// * * * * * * * * *
//   *     *     *
//     *   *   *
//       * * *
//         * 
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
        for(int j=1; j<=i-2; j++){
            cout<<" ";
        }
        for(int k=i; k<=(n-1)-1; k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
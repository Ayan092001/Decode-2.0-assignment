// Print the following pattern
// Sample Input : n = 4
// Output :
//       1
//     2   2
//   3       3
// 4           4

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the row no :";
    cin>>n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++){
            cout<<" ";
        }
        cout<<i;
        for(int j=1; j<=2*(i-1)-1; j++){
            cout<<" ";
        }
        if(i!=1) cout<<i;
        cout<<endl;
    }
    return 0;
}
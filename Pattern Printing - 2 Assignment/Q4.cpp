// Print the following pattern

// Input: n = 4
// Output:

// A B C D E F G
// A B C   E F G
// A B       F G
// A           G

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the row no :";
    cin>>n;
    int nsp = 1;
    for(int j=1; j<=2*n-1; j++){
        cout<<(char)(j+64)<<" ";
    }
    cout<<endl;
    for(int i=1; i<=n-1; i++){
        for(int j=1; j<=n-i; j++){
            cout<<(char)(j+64)<<" ";
        }
        // for(int k=1; k<=nsp; k++){
        //     cout<<" "<<" ";
        // }
        // nsp+=2;
        // for(int l=1; l<=n-i; l++){
        //     cout<<(char)('A'+n+i+l-2)<<" ";
        // }
        cout<<endl;
    }
    return 0;
}
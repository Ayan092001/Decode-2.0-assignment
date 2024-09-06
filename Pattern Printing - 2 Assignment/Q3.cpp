// Print the following pattern
// Input: n = 4
// Output:
//       A
//     B A B
//   C B A B C
// D C B A B C D

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
        int a = i;
        for(int k=1; k<=2*i-1; k++){
            cout<<(char) (i+64);
            if(k<i) a--;
            else a++;
        }
        cout<<endl;
    }
    return 0;
}
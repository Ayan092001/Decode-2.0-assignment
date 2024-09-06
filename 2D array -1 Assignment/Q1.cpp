// Q1: Write a program to store 10 at every index of a 2D matrix with 5 rows and 5 columns.

#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[5][5];
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            a[i][j] = 10;
        }
    }
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
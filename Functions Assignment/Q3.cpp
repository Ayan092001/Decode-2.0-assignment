// Q3: Given two numbers a and b, write a function to print all odd numbers between them.

#include<iostream>
using namespace std;
int odd(int x, int y){
    if(x > y) odd(y,x);
    for(int i=x; i<=y; i++){
        if(i%2!=0)
        cout<<i<<" ";
    }
}

int main(){
    int a;
    cout<<"Enter a :";
    cin>>a;
    int b;
    cout<<"Enter b :";
    cin>>b;
    odd(a,b);
}
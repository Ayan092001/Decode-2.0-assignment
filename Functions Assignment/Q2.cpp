// Q2 : Write a function that takes the radius of a circle as an argument and returns its area.

#include<iostream>
using namespace std;
double area(int r){
    return 3.14 * r * r;
}

int main(){
    int r;
    cout<<"enter the radius :";
    cin>>r;
    cout<<area(r);

}
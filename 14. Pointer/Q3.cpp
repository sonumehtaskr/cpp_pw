/* Write a function that returns the largest and the smallest number out of 3 given numbers.
The main function should call this function to get the largest and smallest number and print
the output.*/

#include<iostream>
using namespace std;

void callFunct(int &a, int &b,int &c){
        cout<<"Largest is: "<<(a > b ? (a > c ? a : c) : (b > c ? b : c));
        cout<<"Smallest is: "<<(a < b ? (a < c ? a : c) : (b < c ? b : c));
}

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    callFunct(a,b,c);
    return 0;
}
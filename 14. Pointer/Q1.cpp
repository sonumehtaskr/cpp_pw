// Write a program to print the address of an integer variable whose value is input by the user.

#include<iostream>
using namespace std;

int main(){
    int var;
    cin>>var;
    int *ptr=&var;
    cout<<"Address of variable: "<<ptr;
    return 0;
}
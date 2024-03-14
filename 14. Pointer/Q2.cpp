//Write a program to find the product of 2 numbers using pointers  

#include<iostream>
using namespace std;

int main(){
    int var1,var2;
    cin>>var1>>var2;
    int *ptr1=&var1;
    int *ptr2=&var2;

    cout<<"Product is: "<<*ptr1 * *ptr2;
    return 0;
    
}
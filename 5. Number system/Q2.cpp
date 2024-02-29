//Given a natural number, find the number of 0’s in the binary representation of that number.

#include <iostream>
using namespace std;

int countZeroes(int n){
    int count = 0;
    while(n > 0){
        if((n&1) == 0){
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    cout << countZeroes(n) << endl;
    return 0;
}
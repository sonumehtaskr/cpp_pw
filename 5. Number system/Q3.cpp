//Given two binary numbers, return the greatest of these numbers in decimal format.

#include <iostream>
using namespace std;

int binaryToDecimal(int n){
    int ans = 0;
    int p = 1;
    while(n > 0){
        int last_bit = (n&1);
        ans += p*last_bit;
        p *= 2;
        n = n >> 1;
    }
    return ans;

}

int greatestBinary(int a, int b){
    int a_dec = binaryToDecimal(a);
    int b_dec = binaryToDecimal(b);
    return max(a_dec, b_dec);
}

int main() {
    int a, b;
    cin >> a >> b;
    cout << greatestBinary(a, b) << endl;
    return 0;
}
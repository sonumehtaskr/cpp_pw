// Print the sum of the first 5 decimal numbers from 1 to 5 in binary format.

#include <iostream>
using namespace std;

int decimalToBinary(int n){
    int ans = 0;
    int p = 1;
    while(n > 0){
        int last_bit = (n&1);
        ans += p*last_bit;
        p *= 10;
        n = n >> 1;
    }
    return ans;

}

int main() {
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += i;
    }
    cout << decimalToBinary(sum) << endl;
    return 0;
}
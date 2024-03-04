/* ​Given an array of size ‘n’ (initially zero) and ‘Q’ updates (increase the value of all index
from l to r with value x) and in the end print all the numbers of the array. */

#include <iostream>
using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    int arr[n] = {0};
    while (q--) {
        int l, r, x;
        cin >> l >> r >> x;
        for (int i = l; i <= r; i++) {
            arr[i] += x;
        }
    }
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
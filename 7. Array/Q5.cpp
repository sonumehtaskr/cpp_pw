/* Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n) (inclusive of
both 0 and n). Find and return the only number of the range that is not present in the array. Here 1<n<101. */

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    int sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    cout << "Missing number: " << n * (n + 1) / 2 - sum << endl;
    return 0;
}
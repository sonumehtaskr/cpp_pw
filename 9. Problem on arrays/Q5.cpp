/* Given an integer array arr, return an array ans such that ans[i] is equal to the product of
all the elements of arr except arr[i]. */

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    vector<int> ans(n, 1);
    int left = 1, right = 1;
    for (int i = 0; i < n; i++) {
        ans[i] *= left;
        ans[n - 1 - i] *= right;
        left *= arr[i];
        right *= arr[n - 1 - i];
    }
    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    return 0;
}
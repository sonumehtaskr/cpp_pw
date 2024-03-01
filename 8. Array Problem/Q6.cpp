/* Given a vector array nums, print the count of triplets [nums[i], nums[j], nums[k]] such
that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == x. Where k is an integer
given by the user. 
Note: The solution set must not contain duplicate triplets and should not have 3 loops. */

#include <iostream>
using namespace std;

int main() {
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;
    for (int i = 0; i < n - 2; i++) {
        int j = i + 1, k = n - 1;
        while (j < k) {
            if (arr[i] + arr[j] + arr[k] == x) {
                count++;
                j++;
                k--;
            } else if (arr[i] + arr[j] + arr[k] < x) {
                j++;
            } else {
                k--;
            }
        }
    }
    cout << count;
    return 0;
}
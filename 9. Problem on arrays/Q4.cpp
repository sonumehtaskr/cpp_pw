// ​Given an integer array arr, return the number of consecutive sequences(subarrays) with odd sum.

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int count = 0;
    for (int i = 0; i < n; i++) {
        int sum = 0;
        for (int j = i; j < n; j++) {
            sum += arr[j];
            if (sum % 2 != 0) {
                count++;
            }
        }
    }
    cout << count;
    return 0;
}
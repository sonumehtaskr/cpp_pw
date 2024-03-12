/* You are given an m x n integer matrix grid. Here m>=3 and n>=3
We define an hourglass as a part of the matrix with the following shape:
Return the maximum sum of the elements of an hourglass.
Note that an hourglass cannot be rotated and must be entirely contained within the matrix.
*/

#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < m - 2; i++)
    {
        for (int j = 0; j < n - 2; j++)
        {
            int sum = 0;
            for (int k = j; k < j + 3; k++)
            {
                sum += arr[i][k];
                sum += arr[i + 2][k];
            }
            sum += arr[i + 1][j + 1];
            if (ans < sum)
            {
                ans = sum;
            }
        }
    }

    cout << ans;
    return 0;
}
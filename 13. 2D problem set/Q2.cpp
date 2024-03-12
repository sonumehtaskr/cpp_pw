/* Given a matrix arr[][] of integers, print the prefix sum matrix for it. */

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

    int temp[m][n];
    temp[0][0] = arr[0][0];

    for (int i = 1; i < m; i++)
    {
        temp[i][0] = temp[i - 1][0] + arr[i][0];
    }

    for (int i = 1; i < n; i++)
    {
        temp[0][i] = temp[0][i - 1] + arr[0][i];
    }

    for (int i = 1; i < m; i++)
    {
        for (int j = 1; j < n; j++)
        {
            temp[i][j] = temp[i - 1][j] + temp[i][j - 1] + arr[i][j] - temp[i - 1][j - 1];
        }
    }

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << temp[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}
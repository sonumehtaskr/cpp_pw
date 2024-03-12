/* Given a 2D matrix with m rows and n columns containing integers. Print and return the row
number with maximum sum in the array. */

#include <iostream>
#include <vector>
using namespace std;

void input2DVector(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
}

void print2DVector(vector<vector<int>> &arr)
{
    int row = arr.size();
    int col = arr[0].size();
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int m, n;
    cin >> m >> n;
    vector<vector<int>> matrix(m, vector<int>(n));
    input2DVector(matrix);
    int ans = 0, maxSum = 0;

    for (int i = 0; i < m; ++i)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            sum += matrix[i][j];
        }
        if (maxSum < sum)
        {
            ans = i + 1;
            maxSum = sum;
        }
    }

    cout << ans;
    return 0;
}
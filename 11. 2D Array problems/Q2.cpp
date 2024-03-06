/* Given an array of intervals where intervals[i] = [start, end], merge all overlapping intervals, and
create a function which returns a vector of the non-overlapping intervals that cover all the
intervals in the input. */

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

void print2dVector(vector<vector<int>> &arr)
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
    int k;
    cin >> k;
    vector<vector<int>> intervals(k, vector<int>(2));
    input2DVector(intervals);
    vector<vector<int>> ans;
    ans.push_back(intervals[0]);
    int j = 0;
    for (int i = 0; i < k; i++)
    {
        if (ans[j][1] >= intervals[i][0])
        {
            ans[j][1] = max(ans[j][1], intervals[i][1]);
        }
        else
        {
            j++;
            ans.push_back(intervals[i]);
        }
    }
    print2dVector(ans);
    return 0;
}

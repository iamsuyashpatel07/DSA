// https://en.wikipedia.org/wiki/In-place_algorithm
// time complexity O(logn)
#include <bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int a = 0;
    int b = n - 1;
    while (a < b)
    {
        for (int i = 0; i < (b - a); ++i)
        {
            swap(matrix[a][a + i], matrix[a + i][b]);
            swap(matrix[a][a + i], matrix[b][b - i]);
            swap(matrix[a][a + i], matrix[b - i][a]);
        }
        ++a;
        --b;
    }
}
int main()
{
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << endl;

    rotate(arr);
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
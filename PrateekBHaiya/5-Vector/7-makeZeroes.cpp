#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> makeZeroes(vector<vector<int>> arr)
{
    vector<int> r, c;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            if (arr[i][j] == 0)
            {
                r.push_back(i);
                c.push_back(j);
            }
        }
    }
    for (auto x : r)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            arr[x][i] = 0;
        }
    }
    for (auto x : c)
    {
        for (int i = 0; i < arr[0].size(); i++)
        {
            arr[i][x] = 0;
        }
    }

    return arr;
}
int main()
{
    vector<vector<int>> arr = {{5, 4, 3, 9}, {2, 0, 7, 6}, {1, 3, 4, 0}, {9, 8, 3, 4}};
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
    vector<vector<int>> zarr = makeZeroes(arr);
    for (int i = 0; i < zarr.size(); i++)
    {
        for (int j = 0; j < zarr[i].size(); j++)
        {
            cout << zarr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
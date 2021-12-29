#include <bits/stdc++.h>
using namespace std;

vector<int> WavePrint(int m, int n, vector<vector<int>> arr)
{
    vector<int> wave;
    int loop = 1;

    for (int i = n - 1; i >= 0; i--)
    {
        if (loop == 1)
        {
            for (int j = 0; j < m; j++)
            {
                wave.push_back(arr[j][i]);
            }
            loop = 0;
        }
        else
        {

            for (int j = m - 1; j >= 0; j--)
            {
                wave.push_back(arr[j][i]);
            }
            loop = 1;
        }
    }
    return wave;
}
int main()
{
    vector<vector<int>> arr = {{1, 9, 4, 10}, {3, 6, 90, 11}, {2, 30, 85, 72}, {6, 31, 99, 15}};
    int m = 4;
    int n = 4;
    vector<int> wave = WavePrint(m, n, arr);
    for (int i = 0; i < wave.size(); i++)
    {
        cout << wave[i] << " ";
    }
    return 0;
}
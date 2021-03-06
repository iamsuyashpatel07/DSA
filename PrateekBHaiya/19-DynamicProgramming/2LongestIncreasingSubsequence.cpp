/*
Given a array sequence,find the length of the longest
subsequence of such that all elemnts of the
subsequence are sorted in increasing order

Input
{50,4,10,8,30,100}


Output
4
{4,8,30,100}

*/
#include <iostream>
#include <vector>
using namespace std;

// Bottom up Solution
int list(vector<int> arr)
{
    int n = arr.size();
    vector<int> dp(n, 1);
    int len = 1;
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (arr[i] > arr[j])
            {
                dp[i] = max(dp[i], 1 + dp[j]);
                len = max(len, dp[i]);
            }
        }
    }
    return len;
}
int main()
{
    vector<int> arr{50, 4, 10, 8, 30, 100};
    cout << list(arr) << endl;
    return 0;
}
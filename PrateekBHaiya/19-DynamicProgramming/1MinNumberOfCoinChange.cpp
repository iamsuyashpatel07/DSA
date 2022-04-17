/*
 Given an array of coin denominations,and integer M
representing target money.We Need to find the min coins
required to make the change.

Input
coins=[1,3,7,10]
M=15

Output
3

 */
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// Bottom up Approach
int minNumberOfCoinsForChange(int m, vector<int> denoms)
{
    vector<int> dp(m + 1, 0);
    dp[0] = 0;
    for (int i = 1; i <= m; i++)
    {
        dp[i] = INT_MAX;
        for (int c : denoms)
        {
            if (i - c >= 0 and dp[i - c] != INT_MAX)
            {
                dp[i] = min(dp[i], dp[i - c] + 1);
            }
        }
    }
    return dp[m] == INT_MAX ? -1 : dp[m];
}

int main()
{
    vector<int> denoms = {1, 5, 7, 10}; // types
    int m = 8;
    cout << minNumberOfCoinsForChange(m, denoms) << endl;
    return 0;
}
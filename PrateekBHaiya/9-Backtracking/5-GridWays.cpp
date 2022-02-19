// time complexity O(2^(m+n))
//  Mathematical way to solve this question is
//  [(m-1+n-1)!/{(m+1)!*(n-1)!}]
#include <iostream>
using namespace std;
int gridways(int i, int j, int m, int n)
{
    // base case
    if (i == m - 1 and i == n - 1)
    {
        return 1;
    }
    // edge case
    if (i >= m or j >= n)
    {
        return 0;
    }
    // recursive case
    int ans = gridways(i + 1, j, m, n) + gridways(i, j + 1, m, n);
    return ans;
}
int main()
{
    int m, n;
    cin >> m >> n;
    cout << "number of path " << gridways(0, 0, m, n);
    return 0;
}
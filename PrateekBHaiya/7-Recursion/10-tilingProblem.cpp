#include <bits/stdc++.h>
using namespace std;
int tiles(int m, int n)
{
    if (m < n)
        return 1;
    int oper1 = tiles(m - 1, n);
    int oper2 = tiles(m - n, n);
    return oper1 + oper2;
}
int tiling(int a, int b)
{
    int res = tiles(a, b);
    return res;
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << tiling(a, b);
    return 0;
}
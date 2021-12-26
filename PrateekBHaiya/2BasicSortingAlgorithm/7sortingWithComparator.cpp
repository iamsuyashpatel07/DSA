#include <bits/stdc++.h>
using namespace std;

vector<int> sortingWithComparator(vector<int> a, bool flag)
{
    int n = a.size() - 1;
    if (flag == 1)
    {
        sort(a.begin(), a.end());
    }
    else
    {
        sort(a.begin(), a.end(), greater<int>());
    }
    return a;
}
int main()
{
    vector<int> a = {111, 33, 45, 2, 4};
    bool flag = 1;
    cout << "Input" << endl;
    for (auto x : a)
    {
        cout << x << " ";
    }
    cout << endl
         << "output" << endl;
    a = sortingWithComparator(a, flag);
    for (auto x : a)
    {
        cout << x << " ";
    }
}
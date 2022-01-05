#include <bits/stdc++.h>
using namespace std;
bool compare(pair<int, int> s1, pair<int, int> s2)
{
    float a = sqrt((s1.first * s1.first) + (s1.second * s1.second));
    float b = sqrt((s2.first * s2.first) + (s2.second * s2.second));
    return a < b;
}
vector<pair<int, int>> sortCabs(vector<pair<int, int>> v)
{
    sort(v.begin(), v.end(), compare);
    return v;
}
int main()
{
    vector<pair<int, int>> arr = {{2, 3}, {1, 2}, {3, 4}, {2, 4}, {1, 4}};
    for (auto x : arr)
    {
        cout << x.first << x.second << " ";
    }
    cout << endl;
    vector<pair<int, int>> arr_sort = sortCabs(arr);
    for (auto x : arr_sort)
    {
        cout << x.first << x.second << " ";
    }

    return 0;
}
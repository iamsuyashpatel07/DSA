#include <bits/stdc++.h>
using namespace std;

bool comp(pair<string, int> a, pair<string, int> b)
{
    return a.second < b.second;
}

vector<pair<string, int>> sortFruits(vector<pair<string, int>> v, string S)
{
    // your code  goes here
    if (S == "name")
        sort(v.begin(), v.end());
    else
        sort(v.begin(), v.end(), comp);
    return v;
}
int main()
{
    vector<pair<string, int>> arr = {{"Mango", 100}, {"Guava", 70}, {"Grapes", 40}, {"Apple", 60}, {"Banana", 30}};
    string S = "name";
    for (auto x : arr)
    {
        cout << x.first << x.second << " ";
    }
    cout << endl;
    vector<pair<string, int>> arr_sort = sortFruits(arr, S);
    for (auto x : arr_sort)
    {
        cout << x.first << x.second << " ";
    }

    return 0;
}
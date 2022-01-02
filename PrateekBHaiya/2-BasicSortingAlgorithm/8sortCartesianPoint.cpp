#include <bits/stdc++.h>
using namespace std;

vector<pair<int, int>> sortCartesian(vector<pair<int, int>> v)
{
    int N = v.size();
    for (int i = 0; i < N; i++)
    {
        bool t = 0;
        int max = INT_MAX;
        pair<int, int> m = {max, max};
        for (int j = i; j < N; j++)
        {
            if (v[j].first < v[i].first)
            {
                int f = v[i].first;
                int l = v[i].second;
                v[i].first = v[j].first;
                v[i].second = v[j].second;
                v[j].first = f;
                v[j].second = l;
            }
            if (v[j].first == v[i].first)
            {
                if (v[j].second < v[i].second)
                {
                    int f = v[i].first;
                    int l = v[i].second;
                    v[i].first = v[j].first;
                    v[i].second = v[j].second;
                    v[j].first = f;
                    v[j].second = l;
                }
            }
        }
    }
    return v;
}
int main()
{
    vector<pair<int, int>> v = {{3, 4}, {2, 3}, {3, 7}, {1, 5}, {3, 4}};
    for (int i = 0; i < v.size(); i++)
    {
        cout << "(" << v[i].first << "," << v[i].second << ")"
             << ",";
    }
    cout << endl;
    v = sortCartesian(v);
    for (int i = 0; i < v.size(); i++)
    {
        cout << "(" << v[i].first << "," << v[i].second << ")"
             << ",";
    }
    return 0;
}
// t.c O(N)
//  vvvvvvvv.vvvvv.imp
#include <bits/stdc++.h>
using namespace std;

int defkin(int W, int H, vector<pair<int, int>> position)
{
    // your code goes here
    vector<int> a;
    vector<int> b;

    a.push_back(0);
    b.push_back(0);

    for (int i = 0; i < position.size(); i++)
    {
        a.push_back(position[i].first);
        b.push_back(position[i].second);
    }

    a.push_back(W + 1);
    b.push_back(H + 1);

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int maxx = 0, maxy = 0;

    for (int i = 0; i < a.size() - 1; i++)
    {
        maxx = max(maxx, a[i + 1] - a[i] - 1);
        maxy = max(maxy, b[i + 1] - b[i] - 1);
    }

    return maxx * maxy;
}
int main()
{
    int a = 15;
    int b = 8;
    vector<pair<int, int>> pos = {{3, 8}, {11, 2}, {8, 6}};
    cout << defkin(a, b, pos);
    return 0;
}
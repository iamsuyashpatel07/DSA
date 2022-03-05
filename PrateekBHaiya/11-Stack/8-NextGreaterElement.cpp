

#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreaterElement(vector<int> v)
{
    int n = v.size();
    vector<int> arr1(n, 0);
    stack<int> s;

    for (int i = n - 1; i >= 0; i--)
    {
        while (!s.empty() && s.top() <= v[i])
        {
            s.pop();
        }

        if (s.empty())
        {
            arr1[i] = -1;
        }
        else
        {
            arr1[i] = s.top();
        }

        s.push(v[i]);
    }

    return arr1;
}

int main()
{
    vector<int> v = {4, 5, 2, 25};
    vector<int> g = nextGreaterElement(v);
    for (int i = 0; i < g.size(); i++)
    {
        cout << g[i] << " ";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
vector<int> vec;
void helper(int k, vector<int> v, int i)
{
    if (i == v.size())
    {
        return;
    }
    if (v[i] == k)
    {
        vec.push_back(i);
    }
    helper(k, v, i + 1);
}
vector<int> findAllOccurences(int k, vector<int> v)
{
    vec.clear();
    helper(k, v, 0);
    return vec;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 6, 8, 7};
    int key = 6;
    vector<int> a = findAllOccurences(key, arr);
    for (auto x : a)
    {
        cout << x << " ";
    }
    return 0;
}
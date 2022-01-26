#include <bits/stdc++.h>
using namespace std;
int helper(vector<int> v, int s, int e, int key)
{
    if (s <= e)
    {
        int mid = (s + e) / 2;
        if (v[mid] == key)
        {
            return mid;
        }
        if (v[mid] > key)
            return helper(v, s, mid - 1, key);
        return helper(v, mid + 1, e, key);
    }
    return -1;
}
int binarySearch(vector<int> v, int x)
{
    int n = v.size() - 1;
    return helper(v, 0, n, x);
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    int key = 5;
    cout << binarySearch(arr, key);
    return 0;
}
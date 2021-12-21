// Expected Time Complexity: O(n)

#include <bits/stdc++.h>
using namespace std;

vector<int> kRotate(vector<int> a, int k)
{
    vector<int> v;
    int n = a.size();
    k = k % n;

    for (int i = 0; i < n; i++)
    {
        if (i < k)
        {
            v.push_back(a[n + i - k]);
        }
        else
        {
            v.push_back(a[i - k]);
        }
    }
    return v;
}
int main()
{
    vector<int> arr = {1, 3, 5, 7, 9};
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int x = 2;
    vector<int> a = kRotate(arr, x);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
}
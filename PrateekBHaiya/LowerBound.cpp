#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> A, int Val)
{
    vector<int> arr;
    for (int i = 0; i < A.size(); i++)
    {
        int diff = Val - A[i];
        arr.push_back(diff);
    }
    int index = -1;
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            mini = min(arr[i], mini);
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (mini == arr[i])
        {
            int found = A[i];
            return found;
        }
    }
    return -1;
}
int main()
{
    // vector<int> A = {-1, -1, 2, 3, 5};
    // int val = 4;
    vector<int> A = {1, 2, 3, 4, 6};
    int val = 4;
    cout << lowerBound(A, val);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int lowerBound(vector<int> A, int Val)
{
    int s = 0;
    int lessVal = 0;
    int e = A.size() - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (A[mid] == Val)
        {
            return Val;
        }
        else if (A[mid] < Val)
        {
            lessVal = A[mid];
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    if (lessVal == 0)
        return -1;
    else
        return lessVal;
}
int main()
{
    vector<int> A = {2, 1, 8, 8, 7};
    int val = 0;
    // vector<int> A = {1, 2, 3, 4, 6};
    // int val = 4;
    cout << lowerBound(A, val);
    return 0;
}
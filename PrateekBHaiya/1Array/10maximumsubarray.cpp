// kadane Algorithm
// tc O(n)

#include <bits/stdc++.h>
using namespace std;
// Edge case {-1,-6,-7,0}
int maxSumSubarray(vector<int> A)
{

    int cs = 0;
    int largest = INT_MIN;
    for (int i = 0; i < A.size(); i++)
    {
        cs += A[i];
        if (cs > largest)
        {
            largest = cs;
        }
        if (cs < 0)
        {
            cs = 0;
        }
    }
    return largest;
}
int main()
{
    // vector<int> arr = {-1, -6, -7};
    vector<int> arr = {-1, -6, -7, 9};
    cout << maxSumSubarray(arr);
    return 0;
}
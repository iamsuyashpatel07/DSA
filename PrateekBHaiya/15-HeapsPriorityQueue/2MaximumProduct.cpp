#include <bits/stdc++.h>
using namespace std;
/*
Input
a[]={3,4,5,2}
Output
12
explanation
(nums[1]-1)*nums([2]-1)=4*3=12
*/

int maxProduct(vector<int> &nums)
{
    priority_queue<int> q;
    for (int i = 0; i < nums.size(); i++)
    {
        q.push((nums[i] - 1));
    }

    int p = q.top();
    q.pop();
    return p * q.top();
}

/**
Given an array containing n integers and an number S denoting a target sum.
Find two distinct integers that can pair up to form target sum.
Let us assume there will be only one such pair.
Input
array=[10,5,2,3,-6,9,11]
S=4
Output
[10,-6]
Approach
brute force t.c O(n^2)
sorting t.c O(nlogn)
unordered_set t.c O(1)
 */
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
vector<int> pairSum(vector<int> arr, int S)
{
    // logic
    vector<int> res;
    unordered_set<int> p;
    for (int i = 0; i < arr.size(); i++)
    {
        int x = S - arr[i];
        if (p.find(x) != p.end())
        {
            res.push_back(x);
            res.push_back(arr[i]);
            return res;
        }
        p.insert(arr[i]);
    }
    return {};
}
int main()
{
    vector<int> arr{10, 5, 2, 3, -6, 9, 11};
    int S = 4;
    auto p = pairSum(arr, S);
    if (p.size() == 0)
    {
        cout << "No such pair";
    }
    else
    {
        cout << p[0] << "," << p[1] << endl;
    }
    return 0;
}
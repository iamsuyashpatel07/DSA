/*
Given an array containing N integers, and an number S
denoting a target sum.

Find all distinct  integers that can add up to form target
sum.The numbers in each triplets should be ordered in
ascending order,and triplets should be ordered too.

Return empty array if no such triplet exists.
Input=[1,2,3,4,5,6,7,8,9,15]
target=18
Output
[[1,2,15]
[3,7,8]
[4,6,8]
[5,6,7]]

Approac:
Brute Force:O(N^3)
Pair Method: t.c:O(N^2)+space complexity:O(n)
two Pointer approach: t.c:O(N)
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<vector<int>> triplets(vector<int> arr, int sum)
{
    sort(arr.begin(), arr.end());
    int n = arr.size();
    vector<vector<int>> result;
    for (int i = 0; i < n - 3; i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int cs = arr[i];
            cs += arr[j];
            cs += arr[k];
            if (cs == sum)
            {
                result.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
            }
            else if (cs < sum)
            {
                j++;
            }
            else
            {
                k--;
            }
        }
    }
    return result;
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 15};
    int S = 18;
    auto result = triplets(arr, S);
    for (auto v : result)
    {
        for (auto x : v)
        {
            cout << x << ",";
        }
        cout << endl;
    }

    return 0;
}
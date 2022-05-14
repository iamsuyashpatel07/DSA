/*
Given an array of size N,find the minimum number of
swaps neede to make the array as sorted

Sample Input
a1=[5,4,3,2,1]
Sample Output
2
sample Input
a1=[10,11,5,4,3,2,1]
sample Output
4
Explanation:- N-1 swap for one cycle
*/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int countMinSwap(vector<int> arr)
{
    // know the actual positions of elements (sorting)
    // store the current indices
    int n = arr.size();
    pair<int, int> ap[n];
    for (int i = 0; i < n; i++)
    {
        ap[i].first = arr[i];
        ap[i].second = i;
    }
    // sorting
    sort(ap, ap + n);
    // build the main logic
    int ans = 0;
    vector<bool> visited(n, false);
    for (int i = 0; i < n; i++)
    {
        // if element is visited or element is in right position
        int old_position = ap[i].second;
        if (visited[i] == true or old_position == i)
        {
            continue;
        }

        // visiting the element (index) for first time
        int node = i;
        int cycle = 0;
        while (visited[node] == false)
        {
            visited[node] = true;
            int next_node = ap[node].second;
            node = next_node;
            cycle += 1;
        }
        ans += (cycle - 1);
    }

    return ans;
}
int main()
{
    vector<int> arr{5, 4, 3, 2, 1};
    cout << countMinSwap(arr) << endl;
    return 0;
}
// // // Expected Time Complexity : O(N)
// // // xor of two same elements is 0

// #include <bits/stdc++.h>
// using namespace std;

// int xoring(vector<int> v)
// {
//     int res = 0;
//     for (auto x : v)
//     {
//         res ^= x;
//     }
//     return res;
// }

/*
above O(N) solution will work below manner after each compatsion
1
0
2
1
5
1
3
6
3
3
*/

// my soln is in O(nlogn)

#include <bits/stdc++.h>
using namespace std;

int xoring(vector<int> v)
{
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size();)
    {
        if ((v[i] ^ v[i + 1]) == 0)
        {
            i += 2;
        }
        else
        {
            return v[i];
        }
    }
    return -1;
}
int main()
{
    vector<int> v = {1, 1, 2, 3, 4, 4, 2, 5, 5};
    cout << xoring(v) << endl;
    return 0;
}
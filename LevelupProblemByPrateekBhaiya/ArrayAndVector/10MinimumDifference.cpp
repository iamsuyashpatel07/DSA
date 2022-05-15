/*
O(N) :
https://github.com/coding-minutes/dsa-levelUp-solutions-cpp/blob/master/Section%2002%20-%20array%20and%20vectors/minimumDifference.cpp
*/
// O(N^2)
#include <bits/stdc++.h>
using namespace std;

pair<int, int> minDifference(vector<int> a, vector<int> b)
{
    // Complete this method
    pair<int, int> result;
    int m = INT_MAX;
    for (auto x : a)
    {
        for (auto z : b)
        {
            int t = abs(x - z);
            if (t < m)
            {
                m = t;
                result.first = x;
                result.second = z;
            }
        }
    }

    return result;
}
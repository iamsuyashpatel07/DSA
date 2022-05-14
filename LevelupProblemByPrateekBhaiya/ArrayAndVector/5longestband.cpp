/*
Given an array containing N integers,find length of longest band.

A band is defined AS A SUBSEQUENCE WHICH CAN BE RE-
ORDERD IN SUCH A MANNER ALL ELEMENTS APPEAR
CONSECUTIVE(i.e with absolute difference of 1 between
neighbouring elements)

A longest band is the band (subsequence) which contains
maximum integers.
Input Array
[1,9,3,0,18,5,2,4,10,7,12,6]

Output
8
Explanation
Largest subset containing consecutive
numbrs is {0,1,2,3,4,5,6,7}
*/
#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;
int largestBand(vector<int> arr)
{
    int n = arr.size();
    unordered_set<int> temp;
    for (auto x : arr)
    {
        temp.insert(x);
    }
    int largestlen = 1;
    for (auto element : temp)
    {
        int parent = element - 1;
        if (temp.find(parent) == temp.end())
        {
            int nextnum = element + 1;
            int cnt = 1;
            while (temp.find(nextnum) != temp.end())
            {
                nextnum++;
                cnt++;
            }
            largestlen = max(largestlen, cnt);
        }
    }
    return largestlen;
}
int main()
{
    vector<int> arr{1, 9, 3, 0, 18, 5, 2, 4, 10, 7, 12, 6};
    cout << largestBand(arr) << endl;
    return 0;
}
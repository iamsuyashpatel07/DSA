#include <bits/stdc++.h>
using namespace std;

string addSpaces(string s, vector<int> &spaces)
{
    int j = 0;
    string str;
    int si = s.size();
    int space = spaces[j];
    for (int i = 0; i < si; i++)
    {
        if (space == i)
        {
            str += ' ';
            j += 1;
        }
        str += s[i];
    }
    return str;
}
int main()
{
    string s = "i code in py thon";
    vector<int> spaces = {1, 5, 7, 9};
    cout << addSpaces(s, spaces);
    return 0;
}
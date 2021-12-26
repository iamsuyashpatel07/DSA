#include <bits/stdc++.h>
using namespace std;
int max_word(vector<string> &se)
{
    int largest = INT_MIN;
    int size = se.size();
    for (int j = 0; j < size; j++)
    {
        string s = se[j];
        int spaces = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == ' ')
            {
                spaces += 1;
            }
        }
        largest = max(spaces, largest);
    }
    return largest;
}
int main()
{
    vector<string> s = {"alice and bob love leetcode", "i think so too", "this is great thanks very much"};
    cout << max_word(s);
    return 0;
}
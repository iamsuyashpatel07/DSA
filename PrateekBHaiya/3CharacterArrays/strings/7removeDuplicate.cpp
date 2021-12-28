// t.c O(N)
#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s)
{
    set<char>
        ss(s.begin(), s.end());
    string str;
    for (auto x : ss)
    {
        str.push_back(x);
    }
    return str;
}
int main()
{
    string s = "geeksforgeeks";
    cout << removeDuplicate(s);
    return 0;
}
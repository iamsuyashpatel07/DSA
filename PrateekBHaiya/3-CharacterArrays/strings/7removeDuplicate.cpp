// t.c O(N)
#include <bits/stdc++.h>
using namespace std;

string removeDuplicate(string s)
{
    set<char>
        fs(s.begin(), s.end());
    string stri;
    for (auto x : fs)
    {
        stri.push_back(x);
    }
    return stri;
}
int main()
{
    string s = "geeksforgeeks";
    cout << removeDuplicate(s);
    return 0;
}
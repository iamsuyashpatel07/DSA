/*
Input
abcd
Output
,a,b,c,d,ab,ac,ad,bc,bd,cd,abc,abd,acd,bcd,abcd,
*/
#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>
using namespace std;
void subsequence(string s, string o, vector<string> &v)
{
    // base case
    if (s.size() == 0)
    {
        v.push_back(o);
        return;
    }

    // rec case
    char ch = s[0];
    string reduce_input = s.substr(1);
    // include
    subsequence(reduce_input, o + ch, v);

    // excludes
    subsequence(reduce_input, o, v);
}
bool compare(string s1, string s2)
{
    if (s1.length() == s2.length())
    {
        return s1 < s2;
    }
    return s1.length() < s2.length();
}
int main()
{
    string s;
    cin >> s;
    vector<string> v;
    string output = "";
    subsequence(s, output, v);
    sort(v.begin(), v.end(), compare);
    for (auto s : v)
    {
        cout << s << ",";
    }

    return 0;
}
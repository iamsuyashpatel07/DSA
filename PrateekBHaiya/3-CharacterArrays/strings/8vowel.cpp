// t.c O(n)

#include <bits/stdc++.h>
using namespace std;

string vowel(string S)
{
    string str;
    for (int i = 0; i < S.size(); i++)
    {
        if (S[i] == 'a' or S[i] == 'e' or S[i] == 'i' or S[i] == 'o' or S[i] == 'u' or S[i] == 'A' or S[i] == 'E' or S[i] == 'I' or S[i] == 'O' or S[i] == 'u')
        {
            str.push_back(S[i]);
        }
    }
    return str;
}
int main()
{
    string s = "geeksforgeeks";
    cout << vowel(s);
    return 0;
}
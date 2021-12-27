#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string str)
{
    int e = str.size() - 1;
    int s = 0;
    while (s <= e)
    {
        if (str[s] != str[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}
int main()
{
    // char str[1000] = "Hello";
    char str[1000] = "lol";
    cout << isPalindrome(str);
    return 0;
}
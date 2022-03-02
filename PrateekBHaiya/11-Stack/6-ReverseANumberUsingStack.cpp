#include <bits/stdc++.h>
using namespace std;

int reverse(int n)
{
    stack<int> s;
    while (n != 0)
    {
        int j = n % 10;
        s.push(j);
        n = n / 10;
    }

    int deci = 1;
    int rev = 0;
    while (!s.empty())
    {
        rev = rev + (s.top() * deci);
        s.pop();
        deci *= 10;
    }
    return rev;
}
int main()
{
    int a;
    cin >> a;
    cout << reverse(a);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
int fibo(int i)
{
    if (i == 0 or i == 1)
    {
        return i;
    }

    return fibo(i - 1) + fibo(i - 2);
}
int main()
{
    int input;
    cin >> input;
    cout << fibo(input) << endl;
    return 0;
}
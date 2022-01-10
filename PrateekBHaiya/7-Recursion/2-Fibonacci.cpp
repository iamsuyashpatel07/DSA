// TIME COMPLEXITY O(2^N)
// SPACE COMPLEXITY O(N)

#include <bits/stdc++.h>
using namespace std;
int fibo(int i)
{
    if (i == 0 or i == 1) // base case
    {
        return i;
    }

    return fibo(i - 1) + fibo(i - 2); // recursive case
}
int main()
{
    int input;
    cin >> input;
    cout << fibo(input) << endl;
    return 0;
}
#include <iostream>
using namespace std;

// Fast Exponentitation
int ModuloExpo(int a, int n, int j)
{
    int ans = 1;
    a = a % j;
    if (a == 0)
    {
        return a;
    }
    while (n > 0)
    {
        int last_bit = (n & 1);
        if (last_bit)
        {
            ans = (ans * a) % j;
        }
        a = (a * a) % j;
        n = n >> 1;
    }
    return ans;
}

int main()
{

    int a, n, j;
    cin >> a >> n >> j;

    cout << ModuloExpo(a, n, j) << endl;

    return 0;
}
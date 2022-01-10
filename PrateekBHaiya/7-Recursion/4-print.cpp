#include <iostream>
using namespace std;
void inc(int i)
{
    if (i == 0)
    {
        return;
    }
    inc(i - 1);
    cout << i << " ";
}
void dec(int i)
{
    if (i == 0)
    {
        return;
    }
    cout << i << " ";
    dec(i - 1);
}
int main()
{
    int inp;
    cin >> inp;
    inc(inp);
    cout << endl;
    dec(inp);
    return 0;
}
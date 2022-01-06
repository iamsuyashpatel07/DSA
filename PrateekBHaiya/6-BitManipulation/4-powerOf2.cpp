#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if ((a & (a - 1)) == 0)
    {
        cout << a << "is power of two" << endl;
    }
    else
    {
        cout << "not a power of two";
    }
    return 0;
}
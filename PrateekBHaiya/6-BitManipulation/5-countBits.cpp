#include <iostream>
using namespace std;
int countBits(int i)
{
    int count = 0;
    while (i > 0)
    {
        int last_bit = (i & 1);
        count += 1;
        i = i >> 1;
    }
    return count;
}
int main()
{
    int i;
    cin >> i;
    cout << countBits(i);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
bool isSameAfterReversals(int num)
{
    int check = num;
    int reverse_number;
    int remainder;
    int t = 0;
    while (t < 2)
    {
        while (num != 0)
        {
            reverse_number = reverse_number * 10;
            reverse_number = reverse_number + num % 10;
            num = num / 10;
        }
        cout << reverse_number << endl;
        t += 1;
    }

    if (check == reverse_number)
    {
        return true;
    }
    return false;
}
int main()
{
    int num = 526;
    cout << isSameAfterReversals(num);
    return 0;
}
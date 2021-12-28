#include <iostream>
#include <string>

using namespace std;
int binaryToDecimal(string s)
{
    int num = 0;
    int power = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        // int temp = s[i] - '0';
        num = num + ((s[i] - '0') * (2 ^ power));
        power++;
    }
    return num;
}
int main()
{
    string s = "111";
    cout << binaryToDecimal(s);
    return 0;
}

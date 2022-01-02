/*

Expected Time Complexity : O(N)


#include <iostream>
#include <string>
using namespace std;

// Function to convert binary to decimal
int binaryToDecimal(string n)
{
    string num = n;
    int dec_value = 0;

    // Initializing base value to 1, i.e 2^0
    int base = 1;

    int len = num.length();
    for (int i = len - 1; i >= 0; i--) {
        if (num[i] == '1')
            dec_value += base;
        base = base * 2;
    }

    return dec_value;
}

*/

#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int binaryToDecimal(string s)
{
    int num = 0;
    int power = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        num = num + ((s[i] - '0') * pow(2, power));
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

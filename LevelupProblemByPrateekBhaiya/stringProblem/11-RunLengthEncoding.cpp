#include <bits/stdc++.h>
using namespace std;

// str is the input the string
string compressString(const string &str)
{
    // complete the function to return output string
    string res;
    for (int i = 0; i < str.length();)
    {
        int count = 1;
        res += str[i];
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j])
            {
                count += 1;
            }
            else
            {
                break;
            }
        }
        res += to_string(count);
        i = i + count;
    }
    int check = 1;
    for (int i = 1; i < res.length(); i = i + 2)
    {
        if (res[i] != '1')
        {
            check = 0;
        }
    }
    string fi_res;
    if (check == 1)
    {
        for (int i = 0; i < res.length(); i = i + 2)
        {
            fi_res += res[i];
        }
    }
    else
    {
        fi_res = res;
    }
    return fi_res;
}
int main()
{
    string str = "aabcd";
    cout << compressString(str) << endl;
    return 0;
}
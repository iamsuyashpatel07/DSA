#include <iostream>
using namespace std;

int main()
{
    char ch;
    ch = cin.get();

    int alpha = 0;
    int space = 0;
    int digit = 0;
    while (ch != '\n')
    {
        if (ch >= '0' and ch <= '9')
        {
            digit += 1;
        }
        else if (ch >= 'a' and ch <= 'z' or ch >= 'A' and ch <= 'Z')
        {
            alpha += 1;
        }
        else if (ch == ' ' or ch == '\t')
        {
            space += 1;
        }
        ch = cin.get();
    }
    cout << "alphabets" << alpha << endl;
    cout << "space" << space << endl;
    cout << "digit" << digit << endl;
    return 0;
}
#include <iostream>
#include <string.h>
using namespace std;
string spell[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
void printspell(int a)
{
    if (a == 0)
    {
        return;
    }
    int i = a % 10;
    printspell(a / 10);
    cout << spell[i] << " ";
}
int main()
{
    int a;
    cin >> a;
    printspell(a);
    return 0;
}
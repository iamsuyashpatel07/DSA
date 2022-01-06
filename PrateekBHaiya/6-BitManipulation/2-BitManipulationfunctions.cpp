#include <iostream>
using namespace std;
int getIthbit(int n, int i)
{
    int mask = (1 << i);
    return (n & mask) > 0 ? 1 : 0;
}
int clearIthbit(int n, int i)
{
    int mask = ~(1 << i);
    n = (n & mask);
    return n;
}
int setIthbit(int n, int i)
{
    int mask = (1 << i);
    n = (n | mask);
    return n;
}
int updateIthbit(int n, int i, int j)
{
    clearIthbit(n, i);
    int mask = (j << i);
    n = (n | mask);
    return n;
}
int clearIbits(int n, int i)
{
    int mask = (-1 << i);
    n = (n & mask);
    return n;
}
int main()
{
    int n = 5;
    int i;
    cin >> i;
    cout << "found " << i << "th bit as " << getIthbit(n, i) << endl;
    /*
    Output:
    1
    found 1th bit as 0
    2
    found 2th bit as 1
Explanation:
step 1 : find i left shift of 1 it will make that place as 1 and rest zero
step 2 : find and of step1 and given number it will make rest zero except the ith place
step 3: compare with zero if ith bit is zero then it will equal to 0 else it will be 1
    */
    cout << clearIthbit(n, i) << endl;
    cout << setIthbit(n, i) << endl;
    cout << updateIthbit(n, i, 1) << endl;
    cout << clearIbits(n, i) << endl;
    return 0;
}
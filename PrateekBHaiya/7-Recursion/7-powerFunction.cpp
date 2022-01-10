#include <iostream>
using namespace std;
// time complexity O(N)
// space complexity O(N)
int power(int i, int j)
{
    if (j == 0) // base case
    {
        return 1;
    }
    return i * power(i, j - 1); // recursive case
}
// time complexity O(logN)
// space complexity O(logN)
int fastpower(int i, int j)
{
    if (j == 0) // base case
    {
        return 1;
    }
    int subprob = power(i, j / 2); // recursive case
    int subprobseq = subprob * subprob;
    if (j & 1)
    {
        return i * subprobseq;
    }
    return subprobseq;
}
int main()
{
    int i, j;
    cin >> i >> j;
    cout << power(i, j) << endl;
    cout << fastpower(i, j) << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

bool arePermutation(string A, string B)
{
    int asize = A.size();
    int bsize = B.size();
    int count = 0;
    if (asize == bsize)
    {
        for (int i = 0; i < asize; i++)
        {
            for (int j = 0; j < bsize; j++)
            {
                if (A[i] == B[j])
                {
                    count++;
                    B[j] = '\0';
                    break;
                }
            }
        }
    }
    bool result = (count == asize) ? true : false;
    return result;
}
int main()
{
    // char str[1000] = "Hello";
    string A = "loi";
    string B = "llo";
    cout << arePermutation(A, B);
    return 0;
}
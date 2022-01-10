#include <bits/stdc++.h>
using namespace std;
bool isSorted(int arr[], int N)
{
    if (N == 0 or N == 1)
    {
        return true;
    }
    if (arr[0] < arr[1] and isSorted(arr + 1, N - 1))
    {
        return true;
    }
    return false;
}
bool isSortedTwo(int arr[], int i, int N)
{
    if (i == N - 1)
    {
        return true;
    }
    if (arr[i] < arr[i + 1] and isSortedTwo(arr + 1, i + 1, N - 1))
    {
        return true;
    }
    return false;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 6, 5};
    int si = sizeof(arr) / sizeof(arr[0]);
    cout << isSorted(arr, si) << endl;
    cout << isSortedTwo(arr, 0, si) << endl;
    return 0;
}
/*
Write a function that takes input an array of distinct
integers,and returns the length of highest mountain.

A mountain is defined as adjacnent integers that are
strictly increasing until they reach a peak, at whcih the become strictly
decreasing.

At least 3 numbers are required to form a mountain.


sample Input
[5,6,1,2,3,4,5,4,3,2,0,1,2,3,-2,4]
sample output
9
explanation longest band which is forming a mountain is
[1,2,3,4,5,4,3,2,0] i.e length is 9.
*/

#include <iostream>
#include <vector>
using namespace std;
int highest_mountain(vector<int> arr)
{
    int n = arr.size();
    int largest = 0;
    for (int i = 1; i <= n - 2;)
    {
        int cnt = 1;
        int j = i;
        if (arr[i] > arr[i - 1] and arr[i] > arr[i + 1])
        {
            // cnt forward dirxn
            while (j >= 1 and arr[j] > arr[j - 1])
            {
                cnt++;
                j--;
            }

            // cnt backward dirxn
            while (i <= n - 2 and arr[i] > arr[i + 1])
            {
                cnt++;
                i++;
            }
            largest = max(largest, cnt);
        }
        else
        {
            i++;
        }
    }
    return largest;
}
int main()
{
    vector<int> arr{5, 6, 1, 2, 3, 4, 5, 4, 3, 2, 0, 1, 2, 3, -2, 4};
    cout << highest_mountain(arr);
    return 0;
}
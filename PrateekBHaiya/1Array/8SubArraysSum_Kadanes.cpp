// time complexity O(N)

#include <iostream>
using namespace std;
int SubArraysSum_Kadanes(int arr[], int size)
{
    int cs = 0;
    int largest = 0;
    for (int i = 0; i < size; i++)
    {
        cs = cs + arr[i];
        if (cs < 0)
        {
            cs = 0;
        }
        largest = max(largest, cs);
    }

    return largest;
}
int main()
{
    int arr[] = {-2, 3, 4, -2, 5, -12, 6, 1, 3};
    int size = sizeof(arr) / sizeof(int);
    int max = SubArraysSum_Kadanes(arr, size);
    cout << "maximum " << max;
    return 0;
}

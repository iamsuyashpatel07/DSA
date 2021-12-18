// time complexity O(N*N*N)
// last element is down press f11 to see it in Output box
#include <iostream>
using namespace std;
int SubArraysSum_BruteForce(int arr[], int size)
{
    int maxsubarray = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int sum = 0;
            for (int k = i; k <= j; k++)
            {
                sum += arr[k];
            }
            maxsubarray = max(maxsubarray, sum);
        }
    }
    return maxsubarray;
}
int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int size = sizeof(arr) / sizeof(int);
    int max = SubArraysSum_BruteForce(arr, size);
    cout << "maximum " << max;
    return 0;
}

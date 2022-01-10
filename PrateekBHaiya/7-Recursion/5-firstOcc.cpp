#include <iostream>
using namespace std;
int firstOcc(int arr[], int size, int key)
{
    // base case
    if (size == 0)
    {
        return -1;
    }
    // recursive case
    if (arr[0] == key)
    {
        return 0;
    }
    int ans = firstOcc(arr + 1, size - 1, key);
    if (ans != -1)
    {
        return ans + 1;
    }

    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 6, 8, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 8;
    cout << firstOcc(arr, size, key);
    return 0;
}
/*
Time Complexit O(N/2) i.e O(N)
Space Complexity O(1)
*/

#include <iostream>
using namespace std;

void reverse_array(int arr[], int size)
{
    int s, e;
    s = 0;
    e = size - 1;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s += 1;
        e -= 1;
    }
}
int main()
{
    int arr[] = {45, 67, 99, 110, 440, 1100};
    int size = sizeof(arr) / sizeof(int);
    for (auto i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    cout << endl;
    reverse_array(arr, size);
    for (auto i = 0; i < size; i++)
    {
        cout << arr[i] << ",";
    }
    return 0;
}

// t.c : O(m*n)

#include <iostream>
using namespace std;
void insertion_sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        int current = arr[i];
        int prev = i - 1;
        while (prev >= 0 and arr[prev] > current)
        {
            arr[prev + 1] = arr[prev];
            prev = prev - 1;
        }
        arr[prev + 1] = current;
    }
}
int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int size = sizeof(arr) / sizeof(int);
    cout << "Input" << endl;
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl
         << "output" << endl;
    insertion_sort(arr, size);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}
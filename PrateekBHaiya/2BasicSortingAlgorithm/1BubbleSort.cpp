// time complexity O(N*N) i.e O(N^2)

#include <iostream>
using namespace std;
// sorting in increasing order
void bubblesort(int arr[], int size)
{
    for (int times = 1; times <= size - 1; times++)
    {
        for (int i = 0; i <= size - times - 1; i++)
        {
            if (arr[i] > arr[i + 1])
            {
                swap(arr[i], arr[i + 1]);
            }
        }
    }
}
int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int size = sizeof(arr) / sizeof(int);
    bubblesort(arr, size);
    for (auto x : arr)
    {
        cout << x << " ";
    }
}
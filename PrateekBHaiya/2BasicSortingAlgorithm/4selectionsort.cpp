// t.c O(m*n)

#include <iostream>
using namespace std;
void selection_sort(int arr[], int size)
{
    for (int pos = 0; pos <= size - 2; pos++)
    {
        int current = arr[pos];
        int min_pos = pos;
        for (int j = pos; j < size; j++)
        {
            if (arr[j] < arr[min_pos])
            {
                min_pos = j;
            }
        }
        swap(arr[min_pos], arr[pos]);
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
    selection_sort(arr, size);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}
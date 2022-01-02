// time complexity O(N*N)
// Bubble Sort has time complexity O(n*n)
// that means whole array will traversed n number of times

// But, using swap helps us to find out wether to proceed for further iterations or not.
// like in case you have said when array is already sorted it will traverse array only once
// and come out of loop and return the function
// so Time complexity for this specific case comes out to be O(n)..
#include <iostream>
using namespace std;
void bubblesort(int arr[], int size)
{
    int i, j, n = size;
    bool swapped;
    for (i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // IF no two elements were swapped by inner loop, then break
        if (swapped == false)
            break;
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
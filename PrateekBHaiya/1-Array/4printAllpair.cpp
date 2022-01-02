// t.c O(N*N)
#include <iostream>
using namespace std;
void print_pair(int arr[], int size)
{
    for (int x = 0; x < size; x++)
    {
        int a = arr[x];
        for (int y = x + 1; y < size; y++)
        {
            cout << arr[x] << " " << arr[y] << endl;
        }
        cout << endl;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    print_pair(arr, size);
    return 0;
}

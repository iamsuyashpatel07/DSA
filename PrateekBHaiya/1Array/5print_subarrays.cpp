// time complexity O(N*N*N)
// last element is down press f11 to see it in Output box
#include <iostream>
using namespace std;
void print_subarrays(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
            }
            cout << endl;
        }
    }
}
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = sizeof(arr) / sizeof(int);
    print_subarrays(arr, size);
    return 0;
}

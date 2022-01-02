
/*
Best Case Time Complexity O(1)
Average Case and worst caseTime Comlexity  O(logn)
Worst Case Time Comlexity is key is not in array
space complexity
In Iterative O(1)
In Recursive O(logn)
*/

#include <iostream>
using namespace std;

int binary_search(int arr[], int size, int key)
{
    int s, e, mid;
    s = 0;
    e = size;
    while (s <= e)
    {
        mid = (s + e) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] < key)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {45, 67, 99, 110, 440, 1100};
    int size = sizeof(arr) / sizeof(int);
    int key;
    cin >> key;

    int index = binary_search(arr, size, key);
    if (index != -1)
    {
        cout << key << " is present at " << index;
    }
    else
    {
        cout << key << " is not found.";
    }
    return 0;
}

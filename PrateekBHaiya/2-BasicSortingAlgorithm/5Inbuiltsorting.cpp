// t.c O(NlogN)
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {-2, 4, -1, 5, -12, 6, 1, 3};
    int size = sizeof(arr) / sizeof(int);
    cout << "Input" << endl;
    for (auto x : arr)
    {
        cout << x << " ";
    }
    sort(arr, arr + size);
    cout << endl
         << "output" << endl;
    for (auto x : arr)
    {
        cout << x << " ";
    }
    sort(arr, arr + size, greater<int>());
    cout << endl
         << "greater output" << endl;
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}
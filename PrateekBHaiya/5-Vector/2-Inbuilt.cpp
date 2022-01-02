#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 4, 55, 66, 5, 7};
    // int key = 3;
    // Element not found
    int key = 55;
    // It is present at index 2
    vector<int>::iterator it = find(arr.begin(), arr.end(), key);
    if (it != arr.end())
    {
        cout << "It is present at index " << it - arr.begin();
    }
    else
    {
        cout << "Element not found";
    }
    return 0;
}
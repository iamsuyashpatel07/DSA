// t.c : O(N)
/* for negative element of array check below link
https://www.udemy.com/course/cpp-data-structures-algorithms-prateek-narang/learn/lecture/27341658#questions/15492016
*/

#include <iostream>
#include <climits>
#include <vector>
using namespace std;
void count_sort(int arr[], int size)
{
    int largest = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        largest = max(largest, arr[i]);
    }
    // create a count vector
    vector<int> freq(largest + 1, 0);
    // update the freq of array
    for (int i = 0; i < size; i++)
    {
        freq[arr[i]]++;
    }
    int j = 0;
    for (int i = 0; i <= largest; i++)
    {
        while (freq[i] > 0)
        {
            arr[j] = i;
            j++;
            freq[i]--;
        }
    }
}
int main()
{
    int arr[] = {3, 4, 2, 5, 1, 6, 1, 9};
    int size = sizeof(arr) / sizeof(int);
    cout << "Input" << endl;
    for (auto x : arr)
    {
        cout << x << " ";
    }
    cout << endl
         << "output" << endl;
    count_sort(arr, size);
    for (auto x : arr)
    {
        cout << x << " ";
    }
    return 0;
}
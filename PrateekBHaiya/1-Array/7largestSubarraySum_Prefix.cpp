
#include <iostream>
using namespace std;

int largestSubarraySum_Prefix(int arr[], int n)
{
    int prefix[n];
    prefix[0] = arr[0];
    for (int i = 0; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }
    int largest_sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int subarraysum = i > 0 ? prefix[j] - prefix[i - 1] : prefix[j];
            largest_sum = max(subarraysum, largest_sum);
        }
    }
    return largest_sum;
}

int main()
{
    int arr[] = {-2, 3, 4, -1, 5, -12, 6, 1, 3};
    int n = sizeof(arr) / sizeof(int);
    cout << largestSubarraySum_Prefix(arr, n) << endl;
    return 0;
}

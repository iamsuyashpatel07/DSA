/*
O(N)
https://github.com/coding-minutes/dsa-levelUp-solutions-cpp/blob/master/Section%2002%20-%20array%20and%20vectors/arrayProducts.cpp
*/

// O(N^2)
#include <vector>
using namespace std;

// Expected Complexity O(N)
vector<int> productArray(vector<int> arr)
{

    // Create an output Array
    int n = arr.size();
    vector<int> output(n, 1);
    for (int i = 0; i < n; i++)
    {
        int temp = 1;
        for (int j = 0; j < n; j++)
        {
            if (i != j)
            {
                temp *= arr[j];
            }
        }
        output[i] = temp;
    }
    // update the output array and return
    // complete the code

    return output;
}
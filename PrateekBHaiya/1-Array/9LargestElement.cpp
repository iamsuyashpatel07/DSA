
// NOte:best practice is to take largest=INT_MIN not 0
#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> arr)
{
    int largest = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {

        largest = max(arr[i], largest);
    }
    return largest;
}
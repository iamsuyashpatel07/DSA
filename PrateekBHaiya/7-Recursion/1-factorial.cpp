// TIME COMPLEXITY : O(N)
// SPACE COMPLEXITY: O(N) TILL THE BASE CASE

#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 0) // base case
    {
        return 1;
    }
    return n * fact(n - 1); // recursive case
}
int main()
{
    int input;
    cin >> input;
    cout << "factorial is" << fact(input) << endl;
    return 0;
}
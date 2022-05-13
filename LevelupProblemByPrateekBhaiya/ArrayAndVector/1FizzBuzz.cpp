#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Complete this method, don't write main
vector<string> fizzbuzz(int n)
{

    vector<string> output;
    for (int j = 1; j <= n; j++)
    {
        if (j % 15 == 0)
        {
            output.push_back("FizzBuzz");
        }

        else if (j % 3 == 0)
        {
            output.push_back("Fizz");
        }
        else if (j % 5 == 0)
        {
            output.push_back("Buzz");
        }
        else
        {
            output.push_back(to_string(j));
        }
    }

    return output;
}
int main()
{
    int n = 15;
    vector<string> result = fizzbuzz(n);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
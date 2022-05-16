#include <bits/stdc++.h>
using namespace std;

vector<int> stringSearch(string big, string small)
{

    vector<int> result;
    int index = big.find(small);
    while (index != -1)
    {
        result.push_back(index);
        index = big.find(small, index + 1);
    }

    return result;
}
int main()
{
    string big = "I liked the movie, acting in movie was great!";
    string small = "movie";
    vector<int> res = stringSearch(big, small);
    for (auto x : res)
    {
        cout << x << ",";
    }
    return 0;
}
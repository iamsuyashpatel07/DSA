#include <bits/stdc++.h>
using namespace std;
bool compare(string a, string b)
{
    if (a.length() == b.length())
    {
        return a < b; //lexicography
    }
    return a.length() < b.length(); //length
}
void findsubsets(char *input, char *output, int i, int j, vector<string> &list)
{
    //base case
    if (input[i] == '\0')
    {
        output[j] = '\0'; //avoid garbagelist
        string temp(output);
        list.push_back(temp);
        return;
    }
    //recursive case
    //include the ith letter
    output[j] = input[i];
    findsubsets(input, output, i + 1, j + 1, list);
    //exclude the ith letter(Backtracking step)
    findsubsets(input, output, i + 1, j, list);
}
int main()
{
    char input[100];
    char output[100];
    vector<string> list;
    cin >> input;
    findsubsets(input, output, 0, 0, list);
    sort(list.begin(), list.end(), compare);
    for (int i = 0; i < list.size(); i++)
    {
        cout << list[i] << endl;
    }

    return 0;
}
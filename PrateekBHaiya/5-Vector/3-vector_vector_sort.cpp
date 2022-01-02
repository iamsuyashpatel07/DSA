#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int calcTotalMarks(vector<int> marks)
{
    return marks[0] + marks[1] + marks[2];
}

bool compare(pair<string, vector<int>> s1, pair<string, vector<int>> s2)
{
    vector<int> m1 = s1.second;
    vector<int> m2 = s2.second;
    return calcTotalMarks(m1) > calcTotalMarks(m2);
}
int main()
{
    vector<pair<string, vector<int>>> arr = {
        {"Suyash", {0, 1, 33}},
        {"Div", {33, 55, 56}},
        {"para", {33, 44, 55}}};

    // sort(arr.begin(), arr.end(), compare);
    for (auto s : arr)
    {
        cout << s.first << " " << calcTotalMarks(s.second) << endl;
    }
    return 0;
}
// Suyash 34
// Div 144
// para 132

// after sort(arr.begin(),arr.end(),compare)
//  Div 144
//  para 132
//  Suyash 34
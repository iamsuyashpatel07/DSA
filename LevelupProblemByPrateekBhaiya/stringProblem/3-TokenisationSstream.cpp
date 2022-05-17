/*
Tokenizing a string denotes splitting a string with
respect to some delimiter(s).

Input
"today is a sunny day"

Output
"today","is","a","sunny","day"
*/
#include <iostream>
#include <cstring>
#include <vector>
#include <sstream>
using namespace std;

int main()
{
    string input;
    getline(cin, input);
    // create a string stream object
    stringstream ss(input);
    // >> and << operators
    string token;
    vector<string> tokens;
    while (getline(ss, token, ' '))
    {
        tokens.push_back(token);
    }
    for (auto token : tokens)
    {
        cout << token << ",";
    }
    return 0;
}
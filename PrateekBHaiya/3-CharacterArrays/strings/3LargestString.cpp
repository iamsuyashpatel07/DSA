#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    cin.get();
    char sentence[1000];
    char lsentence[1000];
    int largest = 0;
    while (n--)
    {
        cin.getline(sentence, 1000);
        int len = strlen(sentence);
        if (len > largest)
        {
            strcpy(lsentence, sentence);
            largest = len;
        }
    }
    cout << lsentence << " " << largest;
    return 0;
}
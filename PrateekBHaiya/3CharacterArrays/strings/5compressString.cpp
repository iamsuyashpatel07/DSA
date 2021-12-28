/*
t.c O(N)
#include<bits/stdc++.h>
using namespace std;

int compress(vector<char>& chars) {

    int count_=1;
    string ans;

    for(int i=0;i<chars.size();i++)
    {
        while(i<chars.size()-1 && chars[i+1] == chars[i])
        {
            count_++;
            i++;
        }
        ans += chars[i];
        if(count_ == 1)
        {
            continue;
        }
        ans += to_string(count_);
        count_ = 1;
    }

     chars.clear();

     for(int i=0;i<ans.size();i++)
     {
          chars.push_back(ans[i]);
     }

    return chars.size();
}

*/

// t.c O(N*N)
#include <bits/stdc++.h>
using namespace std;
int compress(vector<char> &chars)
{
    int si = chars.size();
    vector<char> result;
    for (int i = 0; i < si; i++)
    {
        result.push_back(chars[i]);
        int count = 1;
        for (int j = i + 1; j < si; j++)
        {
            if (chars[i] == chars[j])
            {
                count += 1;
                i = j;
            }
        }
        if (count > 1)
        {
            string str = to_string(count);
            for (int i = 0; i < str.size(); i++)
            {
                result.push_back(str[i]);
            }
        }
    }
    int ri = result.size();
    return ri;
}
int main()
{
    vector<char> n = {'a', 'a', 'b', 'b', 'c', 'c', 'c'};
    cout << compress(n);
    return 0;
}
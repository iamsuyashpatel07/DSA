/*
#include<bits/stdc++.h>
using namespace std;

//bruteforce it takes O(n^2)time
int pairSticks(vector<int> length, int D)
{
    // your code goes here
    int count=0;
    for(int i=0;i<length.size()-1;i++)
    {
        for(int j=i+1;j<length.size();j++)
        {
            if(length[i] && length[j])
            {
                if((length[i]-length[j])<=D)
                {
                     count++;
                     length[i]=length[j]=0;
                }
            }
        }
    }
    return count;
}
//optimized solution it takes O(nlogn time)
int pairSticks2(vector<int> length, int D)
{
    int count=0;
    sort(length.begin(),length.end());//O(nlogn)
    for(int i=0;i<length.size()-1;)//O(n)
    {
        int j=i+1;
        if((length[i]-length[j]<=D))
        {
            count++;
            i=j+1;
        }
        else
            i++;
    }
    return count;
}

int main()
{
    vector<int> v = {1,3,3,9,4};
    int D=2;
    int ans=pairSticks2(v,D);
    cout<<ans<<endl;

    return 0;
}

*/

#include <bits/stdc++.h>
using namespace std;

int pairSticks(vector<int> length, int D)
{
    // your code goes here
    sort(length.begin(), length.end());
    int res = 0;

    for (int i = 0; i < length.size() - 1; i++)
    {
        if (length[i + 1] - length[i] <= D)
        {
            res++;
            i++;
        }
    }

    return res;
}
int main()
{
    vector<int> a = {1, 3, 3, 9, 4};
    int d = 2;
    cout << pairSticks(a, d);
}
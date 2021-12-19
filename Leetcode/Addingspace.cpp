class Solution
{
public:
    string addSpaces(string s, vector<int> &spaces)
    {
        string str;
        int si = s.size();
        int j = 0;
        for (int i = 0; i < si; i++)
        {

            if (spaces[j] == i)
            {
                str += ' ';
                j++;
            }
            str += s[i];
        }
        return str;
    }
};
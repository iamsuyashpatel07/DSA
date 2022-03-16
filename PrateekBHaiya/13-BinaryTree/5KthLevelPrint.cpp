/*
Input :
50             //level 0
60 70          //level 1
90 40 40 20    //level 2
i.e 50 60 90 -1 -1 40 -1 -1 70 40 -1 -1 20 -1 -1
k=2
Output: 20 40 90


*/

#include <bits/stdc++.h>
using namespace std;

struct Node
{
public:
    int key;
    Node *left, *right;
    Node(int d)
    {
        key = d;
        left = right = NULL;
    }
};
Node *buildTree()
{
    int d;
    cin >> d;
    if (d == -1)
    {
        return NULL;
    }
    Node *n = new Node(d);
    n->left = buildTree();
    n->right = buildTree();
    return n;
}
vector<int> printKthLevel(Node *root, int k)
{
    vector<int> lst;
    queue<struct Node *> que;
    que.push(root);
    int lvl = 0, fl = 0;
    while (!que.empty())
    {
        int size = que.size();
        while (size--)
        {
            struct Node *ptr = que.front();
            que.pop();
            if (lvl == k)
            {
                fl = 1;
                lst.push_back(ptr->key);
            }
            else
            {
                if (ptr->left)
                {
                    que.push(ptr->left);
                }
                if (ptr->right)
                {
                    que.push(ptr->right);
                }
            }
        }
        lvl++;
        if (fl == 1)
        {
            break;
        }
    }
    return lst;
}
int main()
{
    Node *root = buildTree();
    int k = 2;
    vector<int> lst = printKthLevel(root, k);
    cout << endl;
    for (int i = 0; i < lst.size(); i++)
    {
        cout << lst[i] << " ";
    }
    return 0;
}
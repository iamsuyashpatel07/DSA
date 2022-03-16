#include <bits/stdc++.h>
using namespace std;
// Input : 50 60 90 -1 -1 40 -1 -1 70 40 -1 -1 20 -1 -1
// Output :Sum= 370
struct Node
{
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

int sumBT(Node *root)
{
    int sum = 0;
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp->left)
        {
            q.push(temp->left);
        }
        if (temp->right)
        {
            q.push(temp->right);
        }
        sum += temp->key;
    }
    return sum;
}
int main()
{
    Node *root = buildTree();
    int sum = sumBT(root);
    cout << sum;
    return 0;
}
/*
Input:
1
2 3
4 5 -1 6
-1 -1 7 -1 -1 -1
i.e 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
Output:
5
Explantion:
number of Element Present in between 7 and 6
*/

#include <bits/stdc++.h>
using namespace std;
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
int height(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int h1 = height(root->left);
    int h2 = height(root->right);

    return 1 + max(h1, h2);
}
int Diameter(Node *root)
{
    // base case
    if (root == NULL)
    {
        return 0;
    }
    // rec case
    int D1 = height(root->left) + height(root->right);
    int D2 = Diameter(root->left);
    int D3 = Diameter(root->right);
    return max(D1, max(D2, D3));
}
int main()
{
    Node *root = buildTree();
    int sum = Diameter(root);
    cout << endl
         << "Diameter is " << sum;
    return 0;
}
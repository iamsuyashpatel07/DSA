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
    // Time Complexity O(N^2)
    // Bottom up Approach
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

//---------------Diameter Optimised
class HDPair
{
public:
    int height;
    int diameter;
};
HDPair optDiameter(Node *root)
{
    // Time Complexity O(N)
    HDPair p;
    if (root == NULL)
    {
        p.height = p.diameter = 0;
        return p;
    }
    // Otherwise
    HDPair Left = optDiameter(root->left);
    HDPair Right = optDiameter(root->right);
    p.height = max(Left.height, Right.height) + 1;
    int D1 = Left.height + Right.height;
    int D2 = Left.diameter;
    int D3 = Right.diameter;
    p.diameter = max(D1, max(D2, D3));
    return p;
}
int main()
{
    Node *root = buildTree();
    cout << endl
         << "Diameter is " << Diameter(root);
    cout << endl
         << "Opt Diameter is " << optDiameter(root).diameter << endl;
    return 0;
}
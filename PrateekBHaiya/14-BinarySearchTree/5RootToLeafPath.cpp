/*
Input :- 1 2 4 -1 -1 5 7 -1 -1 -1 3 -1 6 -1 -1
Output:-
1->2->
4 1->2->5->
7 1->3->
6

*/

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int key;
    Node *left;
    Node *right;
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
void printrRoot2leafPaths(Node *root, vector<int> &path)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL and root->right == NULL)
    {
        // print the vector
        for (int node : path)
        {
            cout << node << "->";
        }
        cout << endl;
        cout << root->key << " ";
        return;
    }
    // rec case
    path.push_back(root->key);
    printrRoot2leafPaths(root->left, path);
    printrRoot2leafPaths(root->right, path);
    // backtracking
    path.pop_back();
    return;
}
int main()
{
    Node *root = buildTree();
    vector<int> path;
    printrRoot2leafPaths(root, path);
    return 0;
}
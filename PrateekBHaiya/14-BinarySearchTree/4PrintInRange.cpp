/*
case 1: 0 children (leaf) deletion
case 2: 1 child deletion
case 3: 2 children deletion

In case third deletion be such that the Inorder traversal
remain same and this rule same goes for first and second
case as well.
*/

#include <iostream>
using namespace std;
class Node
{
public:
    int key;
    Node *left;
    Node *right;
    Node(int key)
    {
        this->key = key;
        left = right = NULL;
    }
};
Node *insert(Node *root, int key)
{
    if (root == NULL)
    {
        return new Node(key);
    }
    if (key < root->key)
    {
        root->left = insert(root->left, key);
    }
    else
    {
        root->right = insert(root->right, key);
    }
    return root;
}
// Challenge : Print all element of BST which lie in the range K1 and K2
void printRange(Node *root, int k1, int k2)
{
    if (root == NULL)
    {
        return;
    }

    if (root->key >= k1 and root->key <= k2)
    {
        // call on both side
        printRange(root->left, k1, k2);
        cout << root->key << " ";
        printRange(root->right, k1, k2);
    }
    else if (root->key > k2)
    {
        printRange(root->left, k1, k2);
    }
    else
    {
        // root->key <k1
        printRange(root->right, k1, k2);
    }
}
int main()
{
    Node *root = NULL;
    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};

    for (int x : arr)
    {
        root = insert(root, x);
    }
    int k1, k2;
    cin >> k1 >> k2;
    printRange(root, k1, k2);
    return 0;
}
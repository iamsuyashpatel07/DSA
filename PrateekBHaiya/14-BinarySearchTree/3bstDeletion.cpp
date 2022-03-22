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
Node *findMin(Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}
// BST Deletion
Node *remove(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    else if (key < root->key)
    {
        root->left = remove(root->left, key);
    }
    else if (key > root->key)
    {
        root->right = remove(root->right, key);
    }
    else
    {
        // when the current node matches with the key
        // No important
        if (root->left == NULL and root->right == NULL)
        {
            delete root;
            root = NULL;
        }
        // single Child
        else if (root->left == NULL)
        {
            Node *temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root;
            root = root->left;
            delete temp;
        }
        //  2 children
        else
        {
            Node *temp = findMin(root->right);
            root->key = temp->key;
            root->right = remove(root->right, temp->key);
        }
    }
    return root;
}
void printInOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    printInOrder(root->left);
    cout << root->key << " ";
    printInOrder(root->right);
}
int main()
{
    Node *root = NULL;
    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};

    for (int x : arr)
    {
        root = insert(root, x);
    }
    int key;
    cin >> key;
    cout << "tree before deletion" << endl;
    printInOrder(root);
    root = remove(root, key);

    cout << endl
         << "tree after deletion" << endl;
    printInOrder(root);
    return 0;
}
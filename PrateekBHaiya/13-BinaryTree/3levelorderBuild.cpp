#include <iostream>
#include <queue>
using namespace std;
/*Todo: Implement Level Order Traversal
 Input : 1 2 3 4 5 -1 6 -1 -1 7 -1 -1 -1 -1 -1
 Output :
1
2 3
4 5 6
7
*/
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = right = NULL;
    }
};
void levelOrderPrint(Node *root)
{
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *temp = q.front();
        if (temp == NULL)
        {
            cout << endl;
            q.pop();
            // insert a new null for the next level
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            q.pop();
            cout << temp->data << " ";
            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}
/* Todo: Implement Level Order Build
for the tree
*/
Node *levelOrderBuid()
{
    int d;
    cin >> d;
    Node *root = new Node(d);

    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *current = q.front();
        q.pop();
        int c1, c2;
        cin >> c1 >> c2;
        if (c1 != -1)
        {
            current->left = new Node(c1);
            q.push(current->left);
        }
        if (c2 != -1)
        {
            current->right = new Node(c2);
            q.push(current->right);
        }
    }

    return root;
}
int main()
{
    Node *root = levelOrderBuid();
    levelOrderPrint(root);
    return 0;
}
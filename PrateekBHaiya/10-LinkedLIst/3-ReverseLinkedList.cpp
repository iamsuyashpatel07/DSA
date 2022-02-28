#include <iostream>
using namespace std;
class List;
class Node
{
    int data;

public:
    Node *next;
    Node(int d) : data(d), next(NULL) {}
    int getData()
    {
        return data;
    }
    friend class List;
};
class List
{
    Node *head;
    Node *tail;

public:
    List() : head(NULL), tail(NULL) {}
    Node *begin()
    {
        return head;
    }
    void push_front(int data)
    {
        if (head == NULL)
        {
            Node *n = new Node(data);
            head = tail = n;
            return;
        }
        else
        {
            Node *n = new Node(data);
            n->next = head;
            head = n;
        }
    }
    void push_back(int data)
    {

        if (head == NULL)
        {
            Node *n = new Node(data);
            head = tail = n;
        }
        else
        {
            Node *n = new Node(data);
            tail->next = n;
            tail = n;
        }
    }
    void insert(int data, int pos)
    {
        if (pos == 0)
        {
            push_front(data);
            return;
        }
        // Otherwise
        Node *temp = head;
        for (int jump = 0; jump <= pos - 1; jump++)
        {
            temp = temp->next;
        }
        Node *n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }
    void reverse(Node *&head)
    {
        Node *C = head;
        Node *P = NULL;
        Node *N;
        while (C != NULL)
        {
            // save the next node
            N = C->next;
            // make the current node point to prev
            C->next = P;
            // update P and C take them 1 step forward
            P = C;
            C = N;
        }
        head = P;
    }
    ~List()
    {
        if (head != NULL)
        {
            delete head;
            head = NULL;
        }
    }
};
int main()
{
    List l;
    l.push_front(1);
    l.push_front(0);
    l.push_back(2);
    l.push_back(4);
    l.insert(2, 2);
    l.insert(10, 0);
    Node *head = l.begin();
    while (head != NULL)
    {
        cout << head->getData() << "->";
        head = head->next;
    }
    cout << endl;
    head = l.begin();
    l.reverse(head);
    while (head != NULL)
    {
        cout << head->getData() << "->";
        head = head->next;
    }
    cout << endl;
    return 0;
}
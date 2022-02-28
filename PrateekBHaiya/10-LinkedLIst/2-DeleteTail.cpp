#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

node *deleteTail(node *head)
{
    // Complete this function
    // edge case
    if (head == NULL)
    {
        return NULL;
    }

    if (head->next == NULL)
    {
        delete head;
        return NULL;
    }
    // finding second last element so that we can delete next and make it as null
    node *secondLast = head;
    while (secondLast->next->next != NULL)
    {
        secondLast = secondLast->next;
    }
    // deleting tail
    delete (secondLast->next);
    // making it null
    secondLast->next = NULL;
    return head;
}

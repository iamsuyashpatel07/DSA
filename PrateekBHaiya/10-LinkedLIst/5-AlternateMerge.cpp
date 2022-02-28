#include <iostream>

using namespace std;

struct node

{

    int data;

    struct node *next;
};

void addnode(struct node **head, int d)

{

    struct node *temp = new struct node;

    temp->data = d;

    temp->next = 0;

    struct node *ptr = (*head);

    while (ptr->next != 0)

        ptr = ptr->next;

    ptr->next = temp;
}

void print(struct node *head)

{

    struct node *ptr = head;

    while (ptr != 0)

    {

        cout << ptr->data << " ";

        ptr = ptr->next;
    }
}

struct node *alternateMerge(struct node *root1, struct node *root2)

{

    // Complete this function

    struct node *i = root1;

    struct node *j = root2;

    struct node *i1 = root1;

    struct node *j1 = root2;

    while (j != 0)

    {

        j1 = j->next;

        i1 = i->next;

        j->next = i->next;

        i->next = j;

        i = i1;

        j = j1;
    }

    return root1;
}

int main()

{

    struct node *head = 0;

    struct node *root1 = new struct node;

    root1->data = 40;

    root1->next = 0;

    head = root1;

    struct node *root2 = new struct node;

    root2->data = 50;

    root2->next = 0;

    struct node *head1 = root2;

    addnode(&head1, 60);

    addnode(&head1, 90);

    addnode(&head1, 70);

    addnode(&head1, 25);

    addnode(&head, 980);

    addnode(&head, 30);

    addnode(&head, 20);

    addnode(&head, 10);

    cout << "Head1: ";

    print(head1);

    cout << endl;

    cout << "Head: ";

    print(head);

    cout << endl;

    cout << "AlternateMerge: ";

    head = alternateMerge(head, head1);

    print(head);

    return 0;
}
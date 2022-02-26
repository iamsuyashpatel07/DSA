#include <iostream>
#include "list.h"
using namespace std;

int main()
{
    List l;
    l.push_front(1);
    l.push_front(0);
    l.push_back(2);
    l.push_back(4);
    l.insert(2, 2);
    l.insert(10, 0);
    l.pop_front();

    Node *head = l.begin();
    while (head != NULL)
    {
        cout << head->getData() << "->";
        head = head->next;
    }
    cout << endl
         << l.search(0) << endl
         << l.recursiveSearch(10) << endl;

    return 0;
}
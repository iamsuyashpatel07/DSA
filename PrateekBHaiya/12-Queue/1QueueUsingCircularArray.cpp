// FIFO
// push O(1)
// pop O(1)
// front O(1)

#include <iostream>
#include "Queue.h"
using namespace std;
int main()
{
    Queue myqueue(7);

    myqueue.push(1);
    myqueue.push(2);
    myqueue.push(3);
    myqueue.push(4);
    myqueue.push(5);
    myqueue.push(6);
    myqueue.push(7);
    myqueue.push(8);
    myqueue.pop();
    myqueue.pop();
    myqueue.push(9);

    while (!myqueue.empty())
    {
        cout << myqueue.getfront() << endl;
        myqueue.pop();
    }
    return 0;
}
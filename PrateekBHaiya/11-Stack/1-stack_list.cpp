// LIFO
// push O(1)
// pop O(1)
// top O(1)

#include <iostream>
#include "stack.h"
using namespace std;
int main()
{
    Stack<char> s;
    s.push('h');
    s.push('e');
    s.push('l');
    s.push('l');
    s.push('o');
    while (!s.empty())
    {
        cout << s.top();
        s.pop();
    }

    return 0;
}

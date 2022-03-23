/* Database of 10,000 students who appeared
for competitive Programming Contest.
Find Out the top 10 performers.*/
/*
1)push
2)Pop Min /Max
3)Get Min /Max
operation on/Ds        Unsorted Array       SortedArray        List         BST          Heap
push                      O(1)                   O(N)          O(N)         O(N)         O(logN)
pop                       O(N)                   O(1)          O(1)         O(N)         O(logN)
Get                       O(N)                   O(1)          O(1)         O(N)          O(1)
*/
/*
following rule are required to be a heap
Heap as CBT
1) It should be a Binary Tree
2)  Complete Binary Tree (CBT):- all level should be completely
    filled except last level but it must be filled in L to R.
3) Heap Order Priority i.e parents >= children
Heap as an Array
Problem with binary tree Memory Representation?
Relationship between Parent and Children
  i
 / \
2i 2i+1
*/
#include <iostream>
using namespace std;

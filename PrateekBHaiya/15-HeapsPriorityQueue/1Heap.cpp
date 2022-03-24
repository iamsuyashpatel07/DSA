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
->Remove Min()/pop()
-swap v[1] and v[last] =>O(1)
-Remove the last element =>O(1)
-Heapify(1)=>O(logN)

By default it will be Max Heap
i.e priority_queue<int>heap
In order to make it MinHeap we pass 2 more paramete
i.e priority_queue<int,vector<int>,greater<int>>heap
*/
#include <iostream>
#include <queue>
using namespace std;
class Compare
{
public:
  bool operator()(int a, int b)
  {
    return a > b;
  }
};
int main()
{
  int arr[] = {10, 15, 20, 13, 6, 90};
  int n = sizeof(arr) / sizeof(arr[0]);
  priority_queue<int, vector<int>, greater<int>> heap;
  for (int x : arr)
  {
    heap.push(x);
  }
  while (!heap.empty())
  {
    cout << heap.top() << endl;
    heap.pop();
  }
  return 0;
}
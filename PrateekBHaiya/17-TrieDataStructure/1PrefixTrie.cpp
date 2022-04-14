/*
Given a list of string and Q Queries each
query containing a word,you have to tell whether
the word is contained in the list or not.
Sample Input
words[]={"apple","ape","mango","news","no"}

quries[]={"apple","banana","new","mango"}

Sample Output
Yes,No,No,Yes

Approach
1)Brute Force(O(N^2))
2)Bst(map)(O(logN))
3)unordered_set/unordered_map
4)Trie
*/
#include <iostream>
#include "trie.h"
using namespace std;

int main()
{

    string words[] = {"hello", "he", "apple", "aple", "news"};
    Trie t;
    for (auto word : words)
    {
        t.insert(word);
    }
    string key;
    cin >> key;
    cout << t.search(key) << endl;

    return 0;
}
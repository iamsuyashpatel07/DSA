/*Consider an algorithm that takes as input a positive integer n. If n is even, the algorithm divides it by two, and if n is odd, the algorithm multiplies it by three and adds one. The algorithm repeats this, until n is one. For example, the sequence for n=3 is as follows:
3→10→5→16→8→4→2→1

Your task is to simulate the execution of the algorithm for a given value of n.

Input

The only input line contains an integer n.

Output

Print a line that contains all values of n during the algorithm.

Constraints
1≤n≤106
Example

Input:
3

Output:
3 10 5 16 8 4 2 1
concept:-
 kya bhai beedha tujhe eetna bhi akaal 
            nhi h use long long otherwise output will overflow
*/





#include<bits/stdc++.h>
using namespace std;
int main(){
unsigned long long int i;
	cin>>i;
	cout<<i<<" ";
	while(i!=1){
		if(i%2==0){
			i=(i/2);
		}
		else{
			i=((i*3)+1);
		}
		cout<<i<<" ";
	}
return 0;
}

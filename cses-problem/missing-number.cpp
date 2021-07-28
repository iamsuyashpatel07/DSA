/*You are given all numbers between 1,2,…,n except one. Your task is to find the missing number.

Input

The first input line contains an integer n.

The second line contains n−1 numbers. Each number is distinct and between 1 and n (inclusive).

Output

Print the missing number.

Constraints
2≤n≤2⋅105
Example

Input:
5
2 3 1 5

Output:
4
concept :-
missing array=total sum-sum of given element

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n;
	cin>>n;
	vector<int>v;
	long long int input;

	long long int s=0;
	for(long long int i=0;i<(n-1);i++){
		cin>>input;
		s+=input;
		v.push_back(input);
    	}
	
	if(n==2)
	{
		if(v[0]==1)
		{
			cout<<v[0]+1;
			return 0;
		}
		else{
			cout<<v[0]-1;
			return 0;
		}
	}
	
cout << (n * (n + 1) / 2) - s << endl;
 
 }	

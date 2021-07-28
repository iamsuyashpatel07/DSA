/*You are given a DNA sequence: a string consisting of characters A, C, G, and T. Your task is to find the longest repetition in the sequence. This is a maximum-length substring containing only one type of character.

Input

The only input line contains a string of n characters.

Output

Print one integer: the length of the longest repetition.

Constraints
1≤n≤106
Example

Input:
ATTCGGGA

Output:
3*
concept:-
 it is too simple but don't go with O(n^2) solution it will show tle go with O(n)
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	string str;
	cin>>str;
	vector<long long>v;
	long long len=str.length();
	if(len==1){
		cout<<1;
		return 0;
	}
		int count=1;
for(long long i=0;i<(len);i++){
			if(str[i]==str[i+1])
			{count++;}
			else{
			    v.push_back(count);
			    count=1;
			}

}
cout<<*max_element(v.begin(),v.end());

return 0;
}




























/* 

we have to permut n!
                 such that no adjacent have absolute differnce 1
                            
concept-
print first all even element of array and the all odd element its is done because of let take case for 
arr[]={1,2,3,4}
1 3 2 4 // false b/c 3-2=1
2 4 1 3 //true                                                         */

#include<bits/stdc++.h>
using namespace std;
int main(){
	int a;
	cin>>a;
	if(a==3||a==2){
		cout<<"NO SOLUTION";
			return 0;
	}
	else if(a==1){
		cout<<a;
			return 0;
	}
	else{
		vector<int>v;
		vector<int>fi;
		for(int i=1;i<=a;i++){
			if(i%2==0) 
			  v.push_back(i);
			else fi.push_back(i);
		}
		//first even
		for(int i=0;i<(((int)(v.size())));i++){
			cout<<v[i]<<" ";
		}
		//second odd
		for(int i=0;i<(((int)(fi.size())));i++){
			cout<<fi[i]<<" ";
		}
	}
	return 0;
}
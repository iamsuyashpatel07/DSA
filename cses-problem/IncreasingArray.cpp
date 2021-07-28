/*
point to noted
  - every element is at least as large as the previous element.
  -you may increase the value of any element by one.
Now test case
- 3 2 5 1 7   // ans=0   initial
- 3 3 5 1 7   // ans=1
- 3 3 5 1 7   // ans=1  
- 3 3 5 5 7   // ans=5
- 3 3 5 5 7   // ans=5    final
*/ 

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	long long a[n];
	for(long long i=0;i<n;i++){
		cin>>a[i];
	}
	long long ans=0;
	
	for(long long j=1;j<n;j++){
		if(a[j]<a[j-1]){
			ans+=abs(a[j-1]-a[j]);
			a[j]=a[j-1];
		}
	  }
	  cout<<ans;
	return 0;
}
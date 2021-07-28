/* 
    If two knight attack each other then they will be
    in 2*3 rectangle or 3*2 rectangle. So the number 
    of ways of placing them is (n-1)*(n-2)+(n-2)*(n-1).
    Also in each rectangle no ways of placing the knight
     is 2. So total ways of placing knight so that they 
     attack each other will be 2*2*(n-1)*(n-2). So the number
    of ways such that knight do not attack each other will be
    
    
     n*n*(n*n-1)/2 — 4*(n-1)*(n-2)  
     
     concept:- 
     total way placing-total way of attacking=total way such that they cannot attack
                                         */
                                         
                                         
                                         
#include<bits/stdc++.h>
using namespace std;
int main(){
	long long i;
	cin>>i;
	for(long long n=1;n<=i;n++){
		cout<<  n*n*(n*n-1)/2 - 4*(n-1)*(n-2)<<'\n';
	}
	return 0;
}
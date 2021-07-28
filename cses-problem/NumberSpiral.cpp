/*
concept= row *row/(column*column)->first value of row*column
*/



#include<bits/stdc++.h>
using namespace std;
int main(){
	 long long int t;
	cin>>t;
	while(t--){
		 long long int i,j;
		cin>>i>>j;
		if(i<j){
		 long long int fi;
		 if(j%2!=0) fi=(j*j)-i+1;
		 else fi=((j-1)*(j-1))+i;
			cout<<fi<<'\n';
		}
		else{
			long long int fi;
		 if(i%2!=0) fi=((i-1)*(i-1))+j;
		 else fi=(i*i)-j+1;
			cout<<fi<<'\n';
		}
	}

	return 0;
}

/* 
Best Time Complexity O(1)
Average and worst Time Comlexity  O(n)
space complexity O(1)
*/

#include <iostream>
using namespace std;

int linear_search(int arr[],int size,int key){
for(int i=0;i<size;i++){
    if(arr[i]==key){
        return i;
    }
}
return -1;
}
int main() {
	int arr[]={3,4,5,6,7,8,9};
    int size=sizeof(arr)/sizeof(int);
    int key;
    cin>>key;

    int index=linear_search(arr,size,key);
if(index!=-1){
    cout<<key<<" is present at "<<index;
}
else{
    cout<<key<<" is not found.";
}
	return 0;
}


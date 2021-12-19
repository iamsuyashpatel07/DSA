#include<vector>
#include<iostream>
#include<climits>
using namespace std;

int maxSubarraySum(vector<int> arr){
    //Complete this function, your function should return the maximum subarray sum
    int n = arr.size();
    int check=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            check=1;
        }
    }
     if(check==0){
   return check;    
}
else{
int max_so_far = INT_MIN, max_ending_here = 0;
 
    for (int i = 0; i < n; i++)
    {
        max_ending_here = max_ending_here + arr[i];
        if (max_so_far < max_ending_here)
            max_so_far = max_ending_here;
 
        if (max_ending_here < 0)
            max_ending_here = 0;
    }
    return max_so_far;
}
    
}
int main(){
vector<int> ary={-1,2,3,4,-2,6,-8,3};
cout<<maxSubarraySum(ary);
return 0;
}
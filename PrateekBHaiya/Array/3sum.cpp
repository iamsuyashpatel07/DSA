#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
vector<vector<int>> threesum(vector<int> &a,int targetsum){
    vector<vector<int>>result;
    int l=a.size();
    for(int i=0;i<l;i++){
        int j=i+1;
        int k=l-1;
        while(j<k){
            int total =a[i]+a[j]+a[k];
            if(total==targetsum){
                result.push_back({a[i],a[j],a[k]});
                j++;
                k--;
            }
            else if(total>targetsum){
                k--;
            }
            else{
                j++;
            }
        }
    }
    return result;

}
int main(){
    vector<int>arr={2,4,1,3,5,6,7,8,9,15};
    int target=18;
    auto total=threesum(arr,target);
    for(auto v:total){
        for(auto w:v){
            cout<<w<<" ";
        }
        cout<<endl;
    }
}
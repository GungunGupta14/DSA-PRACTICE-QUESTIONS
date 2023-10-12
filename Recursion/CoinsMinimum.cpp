#include<iostream>
#include<vector>
using namespace std;
int coins(vector<int>arr,int target){
    if(target==0)
    return 0;
    if(target<0)
    return INT_MAX;
    int mini=INT_MAX;
    for(int i=0;i<arr.size();i++){
        int ans=coins(arr,target-arr[i]);
        if(ans!=INT_MAX){
            mini=min(ans+1,mini);
        }
    }
    return mini;
}
int main(){
    vector<int>arr{3,5};
    int target=8;
    cout<<coins(arr,target);
}
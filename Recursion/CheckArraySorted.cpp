#include<iostream>
#include<vector>
using namespace std;
bool sorted(vector<int>arr,int n,int i){
    if(i==n-1){
        return true;
    }
    if(arr[i]<arr[i+1]){
        return true;
    }
    else{
        return false;
    }
    return sorted(arr,n,i+1);
}
int main(){
    vector<int>arr;
    int n,i=0;
    cout<<"Enter size of array: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Is the array sorted?: "<<sorted(arr,n,i)<<endl;
}
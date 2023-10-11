#include<iostream>
#include<vector>
using namespace std;
int binary(vector<int>arr,int s,int e,int key){
    int mid=s+(e-s)/2;
    if(s>e){
        return -1;
    }
    if(arr[mid]==key){
        return mid;
    }
    if(arr[mid]<key){
        return binary(arr,mid+1,e,key);
    }
    else{
        return binary(arr,s,mid-1,key);
    }
}
int main(){
    vector<int>arr{1,2,3,4,5};
    int n=arr.size();
    int s=0;
    int target;
    cout<<"Enter the element you want to find: ";
    cin>>target;
    int e=n-1;
    cout<<"element at: "<<binary(arr,s,e,target)<<endl;
}
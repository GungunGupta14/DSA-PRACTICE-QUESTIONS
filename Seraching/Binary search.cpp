#include<iostream>
using namespace std;
int binarySearch(int arr[],int size, int target){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        int element = arr[mid];
        if(element==target){
            return mid;
        }
        else if (target<element){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int arr[]={2,4,6,8,10,12,14,16};
    int target;
    cin>>target;
    int size=sizeof(arr)/sizeof(int);
    int indexoftarget=binarySearch(arr,size,target);
    if(indexoftarget==-1){
        cout<<"Element not found"<<endl;
    }
    else{
        cout<<"element fount at: "<<indexoftarget<<endl;
    }
    return 0;
}
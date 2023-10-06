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
        if(mid+1<size && arr[mid+1]==target){
            return mid+1;
        }
        if(mid-1>=0 && arr[mid-1]==target){
            return mid-1;
        }
        else if (target<element){
            end=mid-2;
        }
        else{
            start=mid+2;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int arr[]={10,3,40,20,50,80,70};
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
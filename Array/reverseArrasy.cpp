#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size=8;
    int start=0;
    int last=size-1;
    while(start<=last){
        swap(arr[start],arr[last]);
        start++;
        last--;
    }
    for(int i=0;i<size;i++){
    cout<<arr[i]<<" ";
    }
}
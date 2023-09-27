#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8};
    int size=8;
    int start=0;
    int last=size-1;
    while(true){
        if(start>last){
            break;
        }
        if(start==last){
            cout<<arr[start]<<" ";
        }
        else{
        cout<<arr[start]<<" ";
        cout<<arr[last]<<" ";
        }
        start++;
        last--;
    }
}
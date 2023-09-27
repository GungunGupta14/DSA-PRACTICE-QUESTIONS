#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,3,4,5,-2,-1,5,4,-2};
    int l=0,h=8;
    while(l<=h){
        if(arr[l]<0){
            l++;
        }
        else if(arr[h]>0){
            h--;
        }
        else{
            swap(arr[l],arr[h]);
        }
    }
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
}
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={1,3,2,4,5,8,9,11};
    int size=8;
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"maximum number: "<<max;
}

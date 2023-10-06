#include<iostream>
#include<vector>
using namespace std;
bool search(int arr[][4],int row, int col,int target){
    int s=0;
    int e=row*col-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        int rowIndex=mid/col;
        int colIndex=mid%col;
        if(arr[rowIndex][colIndex]==target){
            cout<<"Found at: "<<rowIndex<<","<<colIndex<<endl;
            return true;
        }
        else if(arr[rowIndex][colIndex]<target){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return false;

}
int main(){
    int arr[5][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16},{17,18,19,20}};
    int target;
    int row=5;
    int col=4;
    cout<<"Enter the element to be found: "<<endl;
    cin>>target;
    int ans=search(arr,row,col,target);
    if(!ans){
        cout<<"Element not found!"<<endl;
    }
    else{
        cout<<"Element found at : "<<ans<<endl;
    }
}
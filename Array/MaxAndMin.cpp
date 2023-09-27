#include<iostream>
using namespace std;
int findmax(int arr[][4],int r, int c){
    int max=INT_MIN;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
        }
    }
    return max;
}
int findmin(int arr[][4],int r, int c){
    int min=INT_MAX;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
    }
    return min;
}
int main(){
    int r,c;
    int arr[4][4];
    r=4,c=4;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Maximum element: "<<findmax(arr,r,c)<<endl;
    cout<<"Minimum element: "<<findmin(arr,r,c)<<endl;

}
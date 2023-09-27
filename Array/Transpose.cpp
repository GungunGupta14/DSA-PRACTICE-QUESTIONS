#include<iostream>
using namespace std;
void Transpose(int arr[][3],int r, int c, int transposearr[][3]){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            transposearr[j][i]=arr[i][j];
        }
    }
}
void printArr(int arr[][3],int r,int c){
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
int main(){
    int arr[3][3];
    int transposearr[3][3];
    int r=3,c=3;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    Transpose(arr,r,c,transposearr);
    cout<<"printing array"<<endl;
    printArr(transposearr,r,c);
}
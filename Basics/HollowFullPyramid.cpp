#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int i=0;i<row;i++){
        int k=0;
        for(int j=0;j<((2*row)-1);j++){
            if(j<row-i-1){
                cout<<" ";
            }else if(k<2*i+1){
                if(k==0||k==2*i||i==row-1)
                cout<<"*";
            
            else{
                cout<<" ";
            } 
            k++;
            }else{
            cout<<" ";
        }
        }
        cout<<endl;
    }
}
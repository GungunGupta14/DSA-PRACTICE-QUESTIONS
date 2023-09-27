#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;

    for(int i=0;i<row;i++){
        for(int j=0;j<row-i;j++){
            cout<<" ";
        }
        for(int k=0;k<i+1;k++){
            cout<<k+1;
        }
        for(int l=i;l>=1;l--){
            cout<<l;
        }
        cout<<endl;
    }
}
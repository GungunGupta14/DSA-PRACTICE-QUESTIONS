#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    int count=1;
    for(int i=0;i<row;i++){
        for(int j=0;j<i+1;j++){
            cout<<count;
            count++;
            if(j!=i){
                cout<<"*";
            }
        }
        cout<<endl;
    }
    int start=count-row;
    for(int i=0;i<row;i++){
        int k=start;
        for(int l=0;l<=row-i-1;l++){
            cout<<k;
            k++;
            if(l!=row-i-1){
                cout<<"*";
            }
        }
        start=start-(row-i-1);
        cout<<endl;
    }
}
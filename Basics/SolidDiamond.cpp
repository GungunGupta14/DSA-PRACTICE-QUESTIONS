#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int i=0;i<row;i++){
        for(int j=0;j<row-i-1;j++){
            cout<<" ";
        }
        for(int k=0;k<i+1;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<i;j++){
            cout<<" ";
        }
        for(int k=0;k<row-i;k++){
            cout<<"* ";
        }
        cout<<endl;
    }
}
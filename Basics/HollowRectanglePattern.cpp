#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter Number of Rows: ";
    cin>>row;
    cout<<"Enter Number of columns: ";
    cin>>col;
    for(int i=0;i<row;i++){
        if(i==0 || i==(row-1)){
            for(int j=0;j<col;j++){
                cout<<"*";
            }
        }
        else{
            cout<<"*";
            for(int i=0;i<col-2;i++){
                cout<<" ";
            }
            cout<<"*";
        }
        cout<<endl;
    }
    
}
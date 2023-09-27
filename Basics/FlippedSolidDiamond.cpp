#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int i=0;i<row;i++){
        //half pyramid
        for(int j=0;j<row-i;j++){
            cout<<"*";
        }
        //space full pyramid
            for(int l=0;l<2*i+1;l++){
                cout<<" ";
            }
            //half pyramid
            for(int k=0;k<row-i;k++){
                cout<<"*";
            }
        cout<<endl;
    }
    for(int i=0;i<row;i++){
        //half pyramid
        for(int j=0;j<i+1;j++){
            cout<<"*";
        }
        //full space pyramid
        for(int k=0;k<2*row-2*i-1;k++){
            cout<<" ";
        }
        for(int l=0;l<i+1;l++){
            cout<<"*";
        }
        cout<<endl;
    }
}
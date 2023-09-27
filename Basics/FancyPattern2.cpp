#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int i=0;i<row;i++){
        for(int j=0;j<row+3-i;j++){
            cout<<"*";        
        }
        for(int k=0;k<i+1;k++){
            cout<<i+1;
            if(k!=i){
                cout<<"*";
            }
        }
        for(int l=0;l<row+3-i;l++){
            cout<<"*";
        }
        cout<<endl;
    }

}
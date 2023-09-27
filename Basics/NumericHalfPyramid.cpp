#include<iostream>
using namespace std;
int main(){
    int row;
    cout<< "Enter number of rows: ";
    cin>>row;
    for(int i=0;i<row;i++){
        for(int j=1;j<=i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int i=1;i<=row;i++){
        int C=1;
        for(int j=1;j<=i;j++){
            cout<<C<<" ";
            C=C*(i-j)/j;
        }
        cout<<endl;
    }
}
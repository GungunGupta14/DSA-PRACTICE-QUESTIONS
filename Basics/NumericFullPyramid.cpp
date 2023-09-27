#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int i=0;i<row;i++){
        int count=i+1;
        for(int j=0;j<row-i;j++){
            cout<<" ";
        }
        for(int k=0;k<i+1;k++){
            cout<<count;
            count++;
        }
        int h=2*i;
        for(int k=0;k<i;k++){
            cout<<h;
            h--;
        }

        cout<<endl;
    }
}
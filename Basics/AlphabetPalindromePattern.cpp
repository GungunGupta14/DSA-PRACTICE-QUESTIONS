#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int i=0;i<row;i++){
        int j;
        for(j=0;j<i+1;j++){
            int ans=j+1;
            char ch=ans+'A'-1;
            cout<<ch;
        }
        for(int j=i;j>=1;j--){
            int ans=j;
            char ch=ans+'A'-1;
            cout<<ch;
        }
        cout<<endl;
    }
}
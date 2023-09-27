#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int i=0;i<row;i++){
        int cond=i<=row/2?2*i:2*(row-i-1);
        for(int j=0;j<=cond;j++){
            if(j<=cond/2){
                cout<<j+1;
            }
            else{
                cout<<cond-j+1;
            }
        }
        cout<<endl;
    }
}
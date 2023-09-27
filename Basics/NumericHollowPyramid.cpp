#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    int start=1;
    for(int i=0;i<row;i++){
        for(int j=0;j<row-i;j++){
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++){
            if(k==0||k==2*i){
                if(k%2==0){
                    cout<<k+1;
                    start++;
                }
                else{
                    cout<<" ";
                }
            }
            else{
                if(k==0){
                    cout<<1;
                }
                else if(k==2*i){
                    cout<<i+1;
                }
                else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }
}
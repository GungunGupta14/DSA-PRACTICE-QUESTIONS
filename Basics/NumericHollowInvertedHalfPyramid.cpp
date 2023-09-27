#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int i=0;i<row;i++){
        for(int j=0;j<row-i;j++){
            if(i==0){
                cout<<j+1;
            }
            else if(j==0){
                cout<<i+1;
            }
            else if(j==row-i-1){
                cout<<row;
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}
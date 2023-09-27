#include<iostream>
using namespace std;
int main(){
    int row;
    cin>>row;
    for(int i=0;i<row;i++){
        for(int j=0;j<i+1;j++){
            cout<<i+1;
            if(j!=i){
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<row-i;j++){
            cout<<row-i;
            if(j!=row-i-1){
                cout<<"*";
            }
        }
        cout<<endl;
    }

}
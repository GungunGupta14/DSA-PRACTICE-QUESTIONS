#include<iostream>
using namespace std;
int max(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    else if(b>a&&b>c){
        return b;
    }
    else{
        return c;
    }
}
int main(){
    int x,y,z;
    cout<<"Enter number1: ";
    cin>>x;
    cout<<"Enter number2: ";
    cin>>y;
    cout<<"Enter number3: ";
    cin>>z;
    cout<<"The max in three numbers is:"<<max(x,y,z)<<endl;
}
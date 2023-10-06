#include<iostream>
#include<string.h>
using namespace std;
int main(){
    char ch[10];
    cin>>ch;
    int i=0,j=strlen(ch)-1;
    while(i<=j){
        swap(ch[i],ch[j]);
        i++,j--;
    }
    cout<<ch<<endl;
}
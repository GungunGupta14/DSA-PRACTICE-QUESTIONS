#include<iostream>
#include<string.h>
using namespace std;
void replaceString(char name[]){
    int n=strlen(name);
    for(int i=0;i<n;i++){
        if(name[i]==' '){
            name[i]='@';
        }
    }
}
int main(){
    char name[100];
    cin.getline(name,100);
    replaceString(name);
    cout<<"replaced string: "<<name<<endl;
}
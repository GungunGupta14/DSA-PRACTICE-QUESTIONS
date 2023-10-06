#include<iostream>
#include<string.h>
using namespace std;
bool palindrome(char name[]){
    int i=0,j=strlen(name)-1;
    while( i<=j){
        if(name[i]!=name[j]){
            return false;
        }
        else{
            i++;
            j--;
        }
    }
    return true;
    
}
int main(){
    char name[100];
    cin>>name;
    if(palindrome(name)){
        cout<<"String is palindrome";
    }
    else{
        cout<<"String is not palindrome";
    }
}
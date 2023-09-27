#include<iostream>
using namespace std;
bool find(int arr[],int size, int key){
    for(int i=0;i<size;i++){
        if(arr[i]==key){
            return true;
        }
    }
    return false;
}
int main(){
    int arr[5]={1,3,4,5,65};
    int size=5;
    int key;
    cout<<"Enter the key to be found in the array: "<<endl;
    cin>>key;
    if(find(arr,size,key)){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not present"<<endl;
    }
}
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{10,20,30,40,70};
    vector<int>brr{20,30,40,50};
    int sum=50;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            if(arr[i]+brr[j]==sum){
                cout<<"pairs: "<<arr[i]<<","<<brr[j]<<endl;
            }
        }
    }
}
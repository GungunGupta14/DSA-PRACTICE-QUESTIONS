#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{10,20,30,40,70};
    vector<int>brr{20,30,40,50};
    int sum=50;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            for(int k=0;k<arr.size();k++){
            if(arr[i]+arr[j]+arr[k]==sum){
                cout<<"pairs: "<<arr[i]<<","<<arr[j]<<","<<arr[k]<<endl;
            }
            }
        }
    }
}
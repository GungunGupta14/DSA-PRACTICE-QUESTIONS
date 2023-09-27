#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5};
    int sizea=5;
    int brr[]={6,5,4,3,7};
    int sizeb=5;
    vector<int>ans;
    for(int i=0;i<sizea;i++){
        for(int j=0;j<sizeb;j++){
            if(arr[i]==brr[j]){
                brr[j]=-1;
                ans.push_back(arr[i]);
            }
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
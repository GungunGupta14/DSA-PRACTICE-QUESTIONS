#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> arr={1,2,3,4,5};
    int sizea=5;
    vector<int> brr={6,7,8,9};
    int sizeb=4;
    vector<int>ans;
    for(int i=0;i<sizea;i++){
        for(int j=0;j<sizeb;j++){
            if(arr[i]==brr[j]){
                brr.erase(std::find(brr.begin(),brr.end(),brr[j]));
            }
        }
    }
    for(int i=0;i<sizea;i++){
        ans.push_back(arr[i]);
    }
    for(int i=0;i<sizeb;i++){
        ans.push_back(brr[i]);
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
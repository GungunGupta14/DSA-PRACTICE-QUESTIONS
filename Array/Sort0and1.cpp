#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>ans{0,0,0,1,1,1,0,1,0,1,1,0,1,0,1};
    int start=0;
    int end=ans.size()-1;
    while(start<end){
        int i=0;
            if(ans[i]==0){
                swap(ans[i],ans[start]);
                i++;
                start++;
            }
            else if(ans[i]==1){
                swap(ans[i],ans[end]);
                end--;
                i++;
            }
        }
    
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}
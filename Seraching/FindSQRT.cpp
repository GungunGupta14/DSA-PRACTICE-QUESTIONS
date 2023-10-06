#include<iostream>
using namespace std;
int findSqrt(int n){
    int s=0;
    int target=n;
    int e=n;
    int ans=-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(mid*mid==target){
            return mid;
        }
        else if(mid*mid>target){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;


    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter the number: "<<endl;
    cin>>n;
    int ans=findSqrt(n);
    cout<<"and is: "<<ans<<endl;
    int precision;
    cout<<"Enter the numer of floating digits you want: ";
    cin>>precision;
    double finalans=ans;
    double step=0.1;
    for(int i=0;i<precision;i++){
        for(double j=finalans;j*j<=n;j=j+step){
            finalans=j;
        }
        step=step/10;
    }
    cout<<"Final ans is: "<<finalans<<endl;
}
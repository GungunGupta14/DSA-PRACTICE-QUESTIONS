#include<iostream>
using namespace std;
int solve(int divident, int divisor){
    int start=0;
    int end=abs(divident);
    int mid=(start+(end-start))/2;
    int ans=0;
    while(start<=end){
        if(abs(mid*divisor)==abs(divident)){
            return mid;
        }
        else if (abs(mid*divisor)>abs(divident)){
            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    if(((divisor<0)&&(divident<0))||(divisor>0&&divident>0))
    return ans;
    else
    return -ans;

}
int main(){
    int divident=22;
    int divisor=-7;
    int ans=solve(divident,divisor);
    cout<<"ans is: "<<ans<<endl;
}
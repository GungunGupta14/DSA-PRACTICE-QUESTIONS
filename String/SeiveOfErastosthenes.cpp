#include<iostream>
#include<vector>
using namespace std;
vector<bool> sieve(int n){
    vector<bool>sieve(n+1,true);
    sieve[0]=sieve[1]=false;
    for(int i=0;i*i<=n;i++){//optimization 2
        if(sieve[i]==true){
            //int j=i*2;
            int j=i*i; //Optimization 1
            while(j<=n){
                sieve[j]=false;
                j+=i;
            }
        }
    }
    return sieve;
}
int main(){
    vector<bool>sievse=sieve(25);
    for(int i=0;i<=25;i++){
        if(sievse[i]){
            cout<<i<<endl;
        }
    }
}
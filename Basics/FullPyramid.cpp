#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter number of rows: ";
    cin>>row;
    int i,j;
    int k=row;
     for ( i = 1; i <= row; i++) {
 
        for ( j = 1; j <= row; j++) {
 
            if (j>=k)
                cout << "* ";
            else
                cout << " ";
        }
        k--;
        cout<<endl;
    }
}
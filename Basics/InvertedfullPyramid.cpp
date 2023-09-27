#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter number of rows: ";
    cin>>row;
    int i,j;
    int space;
     for ( i = 0; i < row; i++) {
        space=i;
        for ( j = 0; j < 2*row-i-1; j++) {
            if (space){
                cout << " ";
                space--;
            }
            else
                cout << "* ";
        }
        cout<<endl;
    }
}
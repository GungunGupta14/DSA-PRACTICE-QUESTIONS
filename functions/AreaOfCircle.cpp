#include<iostream>
#include<cmath>
using namespace std;
double areaofcircle(double r){
    double area=3.14*r*r;
    return area;
}
int main(){
    double r;
    cin>>r;
    cout<<"Area of circle is: "<<areaofcircle(r);
    
}
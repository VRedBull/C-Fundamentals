#include<iostream>
using namespace std;

int main(){
    
    double x,y,z;
    cout<<" Enter x = ";
    cin>>x;
    cout<<" Enter y = ";
    cin>>y;
    cout<<" Enter z = ";
    cin>>z;

    x>y && x>z ? cout<<x<<" is greatest" : y>x && y>z ? cout<<y<<" is greatest" : cout<<z<<" is greatest";

    return 0;
}
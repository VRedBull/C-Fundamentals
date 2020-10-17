#include<iostream>
using namespace std;

int main(){
    double x,y,temp;
    cout<<" Enter x = ";
    cin>>x;
    cout<<" Enter y = ";
    cin>>y;

    cout<<"Inital values "<<" x="<<x<<" y="<<y<<endl;

    temp = x;
    x=y;
    y=temp;

    cout<<"Values after swap "<<" x="<<x<<" y="<<y;

    return 0;
    
}
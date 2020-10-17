#include<iostream>
using namespace std;

int main(){

    int a=1,b=1,temp,limit;

    cout<<"Enter the limit of the fibonnaci Series=";
    cin>>limit;
    cout<<a<<" "<<b<<" ";
    for(int i = 2; i<limit; i++){
        temp = a;
        a=b;
        b=temp+a;
        cout<<b<<" ";
    }
    
    return 0;
}
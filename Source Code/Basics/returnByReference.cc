#include <iostream>
using namespace std;

int & fun(int &a){
    cout<<a<<endl;
    return a;
}

int main(){
    int x=10;
    cout<<x<<endl;
    fun(x)=20;
    cout<<x;
    return 0;
}
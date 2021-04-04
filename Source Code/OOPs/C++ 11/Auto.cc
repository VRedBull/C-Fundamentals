#include<iostream>
using namespace std;

auto fun(){
    return 24*7.234-32*'a';
}

int main(){
    auto f = 'a';               //This is generic type of variable declaration we can assign anytype of data to it
    decltype(f) x = 10+'a';    //this says that it's same type as f variable
    double a = fun();
    cout<<x<<endl;
    cout<<a+f+x;
}
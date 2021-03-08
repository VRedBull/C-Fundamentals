#include<iostream>
using namespace std;

template <class t>

t maxim(t a, t b){
    return a>b?a:b;
}

int main(){
    cout<<maxim(23,12)<<endl;
    cout<<maxim(34.12f,22.124341234f)<<endl;
}
#include<iostream>
using namespace std;

template <typename t>
t maxim(t x, t y){
    return x>y?x:y;
}

template <class t>
t mini(t x, t y){
    return x>y?y:x;
}


int main(){
    cout<<maxim<int>(21,13)<<endl;
    cout<<maxim('m','q')<<endl;
    cout<<mini(2.1,4.1)<<endl;
}
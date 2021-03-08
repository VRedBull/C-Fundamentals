#include <iostream>
using namespace std;

int sum(int a,int b, int c=0){
    return a+b+c;
}

int main(){
    cout<<sum(2,-12)<<endl;
    cout<<sum(32,11,64);
    return 0;
}
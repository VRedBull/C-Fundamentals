#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

float sum(float a, float b){
    return a+b;
}

int sum(int a, int b, int c){
    return a+b+c;
}

int main(){
    cout<<sum(23,11)<<endl;
    cout<<sum(9.21f,32.12f)<<endl;
    cout<<sum(-21,44,11)<<endl;
    return 0;
}
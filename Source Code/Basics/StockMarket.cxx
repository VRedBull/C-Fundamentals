#include <iostream>
#include <cmath>    //Just a library to let us use some math functions
using namespace std;

int main(){
    float amount, principal, interest=0.02;
    int nDays;
    cout<<"Enter for many days you wanna invest = "<<flush;
    cin>>nDays;
    cout<<"Enter your Money : "<<flush;
    cin>>amount;
    
    for (int i = 1; i<=nDays; i++){
        amount = principal*pow(1+interest,i);//pow is a function in cmath library to use exponents if pow(2,3) then it's 2^3
        cout<<"Day "<<i<<" ______________ "<<"Amount : "<<amount<<endl; 
    }
    
    return 0;
}
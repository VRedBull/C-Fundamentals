//Factorial using recursion

#include <iostream>

using namespace std;

int factorial(int n){
    if (n>=1){
        return n*factorial(n-1);
    }
    else{
        return 1;
    }
    
}

int main(){
    int n = 0;
    cout<<factorial(n)<<endl;
    return 0;
}
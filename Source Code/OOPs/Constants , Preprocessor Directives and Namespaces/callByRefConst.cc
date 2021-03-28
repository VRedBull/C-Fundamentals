#include<iostream>
using namespace std;

void fun(int const &a, int const &b){   
    cout<<a<<"  "<<b<<endl;
    // a++,b++; here after declaring the pass by value as const we cannot modify the passed values
    cout<<a<<" "<<b<<endl;
}

int main(){
    int x = 10, y = 20;
    fun(x,y);
    cout<<x<<" "<<y;
}
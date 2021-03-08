#include <iostream>
using namespace std;

int b = 30;

void fun(){
    static int x=20;
    int a=10;
    x++;        //this will remain in memory throughout the program but only accessible by this function
    a++;        //this var will be destroyed as soon as the function is over
    b++;        //this will remain in memory throughout the program and can be accessed by any function. 
    cout<<"Static Local var ="<<x<<", Local var = "<<a<<" ,Global var="<<b<<endl;
}

int main(){
    fun();
    fun();
    fun();
}
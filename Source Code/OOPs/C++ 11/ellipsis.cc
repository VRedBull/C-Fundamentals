#include<iostream>
#include<cstdarg>           //included this header file for va_list class
using namespace std;

int sum(int n,...){         //int n will take the number of argument passed
    va_list list;           
    va_start(list,n);
    int x;
    int s=0;

    for(int i =0; i<n;i++){
        x=va_arg(list, int);
        s+=x;
    }

    return s;
}   

int main(){
    cout<<sum(3,10,20,30)<<endl;        //first argument passed i.e.3 indicates no. of parameters passed
    cout<<sum(5,1,2,3,4,5)<<endl;
}
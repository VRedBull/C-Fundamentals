#include<iostream>
#define c cout
#define length 5
#define breadth 6
#define Area(l,b)  (l*b)

#ifndef length      
#define length 7   
#endif

#define msg(x) #x

using namespace std;


int main(){
    c<<Area(length,breadth)<<endl; 
    c<<msg(wello hello);
}
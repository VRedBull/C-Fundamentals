#include<iostream>
#include "utils.h"
using namespace std;
void bro(),printSomething(); //This is called function prototyping...all this does that it tells the compiler that there is a 
                      //function of this name later on in the program so don't get confused if we call the function 
                        //before declaration of the actual function body
int main(){
    printSomething();
    bro();
    comp();
}

void printSomething(){
    cout<<"This is a Good function."<<endl;
}
void bro(){
    cout<<"Morning Brother!"<<endl;
}
void comp(){
    cout<<"This is a Laptop"<<endl;
}
#include<iostream>
// #include "utils.h"  //This is another coustom header file
using namespace std;
void bro(),printSomething(),comp(),vim(); //This is called function prototyping...all this does that it tells the compiler that there is a 
                      //function of this name later on in the program so don't get confused if we call the function 
                        //before declaration of the actual function body
int main(){
    printSomething();
    bro();
    comp();
    vim();
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
void vim(){
	cout<<"I made this function using vim."<<endl;
}

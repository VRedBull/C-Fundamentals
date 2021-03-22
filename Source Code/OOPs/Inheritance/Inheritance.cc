#include<iostream>
using namespace std;


struct A{
    void funA(){
        cout<<"A"<<endl;
    }
};

struct B : A{

    void funB(){
        cout<<"B"<<endl;
    }

};
int main(){ 
    
    B b;
    b.funA();
    b.funB();

}
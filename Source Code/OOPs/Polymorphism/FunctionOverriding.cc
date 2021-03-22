#include<iostream>
using namespace std;

class Parent{
    public:
    void fun(){
        cout<<"Function in Parent"<<endl;
    }
};

class Child: public Parent{
    public:
    //@override  -  This notation is required in some languages to denote that it's a overriden function
    void fun(){
        cout<<"Function of Child"<<endl;
    }
};
int main(){
    Child c;
    c.Parent::fun();
    Parent p;
    p.fun();
}
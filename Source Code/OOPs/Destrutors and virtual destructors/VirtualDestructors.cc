#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Base constructor"<<endl;
    }

    virtual ~Base(){
        cout<<"Base Destructor"<<endl;
    }
};

class Derived:public Base{
    public:
    Derived(){
        cout<<"Derived constructor"<<endl;
    }
    ~Derived(){
        cout<<"Derived Destructor"<<endl;
    }
};


int main(){
    Base *b = new Derived;
    delete b;
}
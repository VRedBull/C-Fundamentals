#include<iostream>
using namespace std;

class Test{
    public:
    Test(){
        cout<<"Test object created"<<endl;
    }

    ~Test(){
        cout<<"Test object destroyed"<<endl;
    }
};

int main(){ 
    Test t;
    cout<<"after object created"<<endl;

    Test *p = new Test();       //when creating a object in heap memory we have destroy the object manually.
    delete p;           //this is like calling the destructor
}
#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Base default"<<endl;
    }
    Base(int x){
        cout<<"Base Parameterized "<<x<<endl;
    }
};

class Derived:public Base{
    public:
    Derived(){
        cout<<"Default of Derived"<<endl;
    }
    Derived(int x){
        cout<<"Parameterized of Derived "<<x<<endl;
    }
    Derived(int x, int y):Base(x){      //will call base constructor passing value x
        cout<<"Calling base Constructor through Derived Constructor " <<x<<" "<<y<<endl;
    }
};

int main(){
    Derived d1;    //will first make the call to base class then it's own class constructor 
    cout<<endl;
    Derived d2(2);      //first non-parameterized constructor of base class then parameterized of derived class
    cout<<endl;
    Derived d3(4,5);    
}
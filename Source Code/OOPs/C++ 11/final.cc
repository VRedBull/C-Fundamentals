#include<iostream>
using namespace std;

class Base{
    virtual void fun() final{      //a final function must be virtual

    }
};

class Derived:public Base{
    // void fun(){}             //error msg: cannot override 'final' function "Base::fun"
};


// _______________________________________________________________________________________


class Base1 final {

};

// class Derived1 : public Base1{ };    error msg: a 'final' class type cannot be used as a base class

int main(){

}
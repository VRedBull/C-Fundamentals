#include<iostream>
using namespace std;

class Base{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    void funBase(){
        a=10;       //all these are accessible from inside the class
        b=20;
        c=30;
    }
};

class Derived:public Base{
    void funDerived()
    {
        // a=15;  cannot access this value as it's private
        b=25;   //b is protected and c is public so it is accessible by Derived class
        c=35;
    }
};

class Object{
    Base b1;
    void funObject(){
        //Can only access the public members through object
        b1.c=100;
    }
};

int main(){

}
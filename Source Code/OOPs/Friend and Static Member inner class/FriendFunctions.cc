#include <iostream>
using namespace std;

class Base{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    friend void fun();      //We will declare these functions as friend of this Base class
    friend int main();      //We can even declare main() as a friend
};

void fun(){
    Base b;
    b.a=25;     //Since it's friend function it can access all the members of the class through the object
    b.b=35;     //It can even access private and protected as if it was a member function of that class.
    b.c=45;
}

int main(){
    Base b;
    b.a=10;
    b.b=20;
    b.c=30;
}
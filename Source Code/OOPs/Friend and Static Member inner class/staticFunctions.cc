#include<iostream>
using namespace std;

class Test{
    public:
    int a = 10;
    static int b;
    void fun(){
        // a++;  cannot access a non-static variables inside a static function
        b++;    //static functions can only access static variables
        cout<<"A static function"<<endl;
    }
};

int Test::b=0;  //have to instantiate a static variable using scope res op

int main(){
    Test t1,t2;
    t1.fun();
    t2.fun();
    cout<<t1.b;
    // Test::fun();
}
#include<iostream>
using namespace std;

class Test{
    private:
    int a,b;
    public:
    static int count;
    Test(){         //cannot initialize a static var inside a constructor, as it's same for all the objects of class
        a=10;
        b=20;
        count++;
    }
};

int Test::count=0;      //have to intialize it outside the class using a scope resolution operator

int main(){
 Test t1;       //incremented count from 0 to 1
 Test t2;       //incremented count from 1 to 2
 cout<<t1.count<<endl;
 cout<<t2.count<<endl;
 t1.count=25;
 cout<<t2.count<<endl;
 cout<<Test::count<<endl;
}
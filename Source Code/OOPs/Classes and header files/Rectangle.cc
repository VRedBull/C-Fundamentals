#include <iostream>
using namespace std;

class Rectangle{
    public:
    int length,breadth;

    int area(){
        return length*breadth;
    }
    int primeter(){
        return 2*(length*breadth);
    }
};


int main(){
    Rectangle r1,r2;
    r1.length=10;
    r1.breadth=5;
    cout<<r1.area()<<endl;
    cout<<&r1<<endl;
    cout<<&r1.length<<endl;
    cout<<&r1.breadth<<endl;

    r2.length=10;
    r2.breadth=50;
    cout<<r2.area()<<endl;
    cout<<&r2<<endl;
    cout<<&r2.length<<endl;
    cout<<&r2.breadth<<endl;

}
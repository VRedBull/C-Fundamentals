#include <iostream>
using namespace std;

class Rectangle{
    public:
    int length,breadth;

    int area(){
        return length*breadth;
    }
    int primeter(){
        return 2*(length+breadth);
    }
};

int main(){

    //Two methods to access the data members of class through pointers

    //Method one 
    Rectangle r;
    Rectangle *p;
    p=&r;
    p->length=20;
    p->breadth=30;
    cout<<p->area()<<endl;
    cout<<p->primeter()<<endl<<endl;

    //Method two
    Rectangle *ptr = new Rectangle();   //Creating pointer object which will store memory in heap rather than in stack. 
    ptr->length=50;
    ptr->breadth=60;
    cout<<ptr->area()<<endl;
    cout<<ptr->primeter()<<endl;
}
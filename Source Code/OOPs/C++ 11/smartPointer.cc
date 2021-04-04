#include<iostream>
#include <memory>

using namespace std;

class Rectangle{
    int length,breadth;
    
    public:
    Rectangle(){

    };

    Rectangle(int length, int breadth){
        this->length = length;
        this->breadth = breadth;
    }

    int area(){
        return length*breadth;
    };
};
int main(){
    // Rectangle *r = new Rectangle(10,20);
    // cout<<r->area()<<endl;

    shared_ptr<Rectangle> ptr1(new Rectangle(20,30));
    shared_ptr<Rectangle> ptr2(new Rectangle(50,60));        
        shared_ptr<Rectangle> ptr3(new Rectangle(50,60));        

    cout<<ptr1->area()<<endl;
    cout<<ptr2->area()<<endl;
    cout<<ptr2.use_count();

}
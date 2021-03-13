#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length,breadth;
    public:
    Rectangle(int length,int breadth){
        this->length=length;
        this->breadth=breadth;
    }
    int getlength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
};

int main(){
    Rectangle r(10,30);
    cout<<r.getlength()<<endl<<r.getBreadth()<<endl;
    return 0;
}
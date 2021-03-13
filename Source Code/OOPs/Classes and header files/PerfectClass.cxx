#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length, breadth;

    public:

    //Constructors
    // Rectangle();        
    Rectangle(int a=0, int b=0);
    Rectangle(Rectangle &r);

    //Mutators
    void setLength(int l);
    void setBreadth(int b);

    //Accessors
    int getLength();
    int getBreadth();

    //Facilitators
    int area();
    int perimeter();

    //Enquiry
    bool isSquare();

    //Destructor
    ~Rectangle();

};

int main(){
    Rectangle r(10,20);
    cout<<r.isSquare()<<endl;
    cout<<r.area()<<endl;
}

Rectangle::Rectangle(int a, int b){
        setLength(a);
        setBreadth(b);
}

void Rectangle::setLength(int l){
    l>=0?length=l:length=0;
}
void Rectangle::setBreadth(int b){
    b>=0?breadth=b:breadth=0;
}
int Rectangle::getLength(){                
    return length;
}
int Rectangle::getBreadth(){
    return breadth;
}  
int Rectangle::area(){
    return length*breadth;
}
int Rectangle::perimeter(){
    return 2*(length*breadth);
}

bool Rectangle::isSquare(){
    return length==breadth;
}

Rectangle::~Rectangle(){
    cout<<"Destroyed the Rectangle"<<endl;
}
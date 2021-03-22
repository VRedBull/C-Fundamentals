#include<iostream>
using namespace std;

class Rectangle
{
private:
    /* data */
    int length,breadth;
public:
    Rectangle(int length,int breadth);
    Rectangle(Rectangle &r);
    void setLength(int length);
    void setBreadth(int breadth);
    int getLength(){return length;}
    int getBreadth(){return breadth;}
    int area(){return length*breadth;}
    int perimeter(){return 2*(length+breadth);}
    bool isSquare(){return length==breadth?true:false;}
    ~Rectangle();

};

Rectangle::Rectangle(int length=1,int breadth=1)
{
    setLength(length);   
}

Rectangle::Rectangle(Rectangle &r){
    r.length=length;
    r.breadth=breadth;
}

void Rectangle::setLength(int length){
    this->length=length;
}

void Rectangle::setBreadth(int breadth){
    this->breadth=breadth;
}

Rectangle::~Rectangle()
{
    cout<<"Object destroyed of Rectangle"<<endl;
}

class Cuboid:public Rectangle{
    private:
    int height;

    public:

    Cuboid(int height=1);
    Cuboid(Cuboid &c);
    void setHeight(int height);
    int getHeight(){return height;}
    int volume(){return getLength()*getBreadth()*height;}
    ~Cuboid(){cout<<"Destroyed Cuboid object."<<endl;}
};

void Cuboid::setHeight(int height){
    this->height=height;
}

int main(){
    Cuboid c1,c2;
    c1.setLength(3);
    c1.setBreadth(2);
    c1.setHeight(4);
    c1.area();
    c1.isSquare();
    c1.perimeter();
    c1.volume();
}
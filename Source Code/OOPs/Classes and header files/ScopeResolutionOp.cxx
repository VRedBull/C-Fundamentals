#include <iostream>
using namespace std;

class Rectangle{
    private:
    int len,bred;
    public:
    Rectangle(int a=0, int b=0){
        len=a;
        bred=b;
    }

    Rectangle (Rectangle &r);

    int area(){
        return len*bred;
    }

    inline int perimeter();
};

Rectangle::Rectangle(Rectangle &r){
    len=r.len;
    bred=r.bred;
}

int Rectangle::perimeter(){
    return 2*(len+bred);
}


int main(){
    Rectangle r1(10,30);
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl<<endl;

    Rectangle r2(r1);
    cout<<r2.area()<<endl;
    cout<<r2.perimeter()<<endl;
}
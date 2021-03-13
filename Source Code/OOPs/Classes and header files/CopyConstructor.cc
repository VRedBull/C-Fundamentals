#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length,breadth;

    public:
    Rectangle(int a =0, int b=0){
        setLen(a);
        setBred(b);
    }

    Rectangle(Rectangle &rect){     //This is a copy constructor
        length=rect.length;
        breadth=rect.breadth;
    }
    void setLen(int a){
        length=a;
    }
    void setBred(int b){
        breadth=b;
    }

    int getLen(){
        return length;
    }
    int getBred(){
        return breadth;
    }
};
int main(){
    Rectangle r(10,20);
    cout<<r.getLen()<<endl;
    cout<<r.getBred()<<endl<<endl;

    Rectangle r1(r);            //This is calling the copy constructor
    cout<<r1.getLen()<<endl;    //here r1 object will have same values as object r
    cout<<r1.getBred()<<endl;
    return 0;
}
#include <iostream>
using namespace std;

class Rectangle{
    private:        //Variables in classes are also called Data members or Properties
    int length,breadth;

    public:

    //getters and setters to modify the data indirectly
    void setLength(int l){          //Setters are called mutators
        l>=0?length=l:length=0;
    }
    void setBreadth(int b){
        b>=0?breadth=b:breadth=0;
    }
    int getLength(){                //Getters are Accessors
        return length;
    }
    int getBreadth(){
        return breadth;
    }

    //Normal functions of a class
    int area(){
        return length*breadth;
    }
    int primeter(){
        return 2*(length*breadth);
    }
};
int main(){
    Rectangle r;

    r.setLength(20);
    r.setBreadth(30);
    cout<<r.getLength()<<endl;
    cout<<r.getBreadth()<<endl;
    cout<<r.area()<<endl;
    cout<<r.primeter()<<endl;
}
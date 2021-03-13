#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length,breadth;

    public:


    Rectangle(int a =0, int b=0){
        setLength(a);
        setBreadth(b);
    }

    void setLength(int l){
        l>=0?length=l:length=0;
    }
    void setBreadth(int b){
        b>=0?breadth=b:breadth=0;
    }
    int getLength(){                
        return length;
    }
    int getBreadth(){
        return breadth;
    }  
    int area(){
        return length*breadth;
    }
    int primeter(){
        return 2*(length*breadth);
    }
};
int main(){
    Rectangle r1,r2(10,20);
    cout<<r1.getBreadth()<<endl;        //Default values for the r1 object
    cout<<r1.getLength()<<endl;
    cout<<r2.getLength()<<endl;         //Initialized the variables with passed arguments
    cout<<r2.getBreadth()<<endl;
}
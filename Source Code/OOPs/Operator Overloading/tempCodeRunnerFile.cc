#include <iostream> 
using namespace std;

class Complex{ 
    int real,img;
    
    public:
Complex(){ 
    real=0; img=0;
}
Complex(int real, int img){
    this->real=real;
    this->img=img;
}
Complex operator+(Complex c1)
{ 
    Complex temp; 
temp.real=real+c1.real; 
temp.img=img+c1.img; 
return temp;
}
Complex operator*(Complex c2)
{ Complex tmp; 
tmp.real=(real*c2.real)-(img*c2.img); 
tmp.img=(real*c2.img)+(real*c2.img); 
return tmp;
}

void print(){
	cout<<real << "+"<<img <<"i"<<endl;
}
};

int main()
{
    Complex c1(2,3),c2(4,5),c3,c4; 
    c3=c1+c2;
    c4=c1*c2;
    c3.print();
    c4.print();
    return 0;
}
#include<iostream>
using namespace std;

class Complex{
    private:
    int real,img;
    public:
    Complex(int real=0,int img=0){
        this->real=real;
        this->img=img;
    }

    int getReal(){
        return real;
    }

    int getImg(){
        return img;
    }
    friend Complex operator+(Complex c1, Complex c2);   
};

Complex operator+(Complex c1, Complex c2){
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.img=c1.img+c2.img;
    return temp;
}
int main(){
    Complex c1(10,23),c2(3,5),c3;
    c3=c1+c2;
    cout<<c3.getReal()<<"+ i"<<c3.getImg()<<flush;
}
#include<iostream>
using namespace std;

class Complex{
    private:
    int real,img;
    public:
    Complex(int real=0, int img=0){
        this->real=real;
        this->img=img;
    }

    Complex add(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }

    Complex operator+(Complex c){
        Complex temp;
        temp.real=real+c.real;
        temp.img=img+c.img;
        return temp;
    }

    Complex operator-(Complex c){
        Complex temp;
        temp.real=real-c.real;
        temp.img=img-c.img;
        return temp;
    }

    int getImg(){
        return img;
    }

    int getReal(){
        return real;
    }

};

int main(){
    Complex c1(3,2),c2(15,6),c3,c4,c5;
    c3=c1.add(c2);
    c4=c1+c2;
    c5=c1-c2;
    cout<<c3.getReal()<<" + "<<c3.getImg()<<"i"<<endl;
    cout<<c4.getReal()<<" + "<<c4.getImg()<<"i"<<endl;
    cout<<c5.getReal()<<" - "<<c5.getImg()<<"i"<<endl;

}


//  Using Struct instead of a class


// struct Complex{
//     int real,img;
//     Complex(int r=0,int i=0){
//         real=r;
//         img=i;
//     }
//     Complex add(Complex c){                    
//         Complex temp;
//         temp.real=real+c.real;
//         temp.img=img+c.img;
//         return temp;
//     }

// };

// int main(){
//     Complex c1(10,30),c2(2,5),c3;
//     c3=c1.add(c2);
//     cout<<c3.real<<"+"<<c3.img;
// }
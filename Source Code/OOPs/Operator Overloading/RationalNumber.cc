#include<iostream>
using namespace std;

class Rational{
    private:
    int n,d;
    public:
    Rational(int n=1, int d=1){
        this->n=n;
        this->d=d;
    }

    Rational operator+(Rational r){
        Rational temp;
        temp.n=n*r.d+r.n*d;
        temp.d=d*r.d;
        return temp;
    }

    void display(){
        cout<<n<<"/"<<d<<endl;
    }
};

int main(){
    Rational r1(2,3),r2(4,5),r3;
    r3=r1+r2;
    r3.display();
}
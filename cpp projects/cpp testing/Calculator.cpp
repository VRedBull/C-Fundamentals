#include<iostream>
using namespace std;

class Calcutor{
    public:

    double num1, num2;

    void add(){
        double x = num1+num2;
        cout<<num1<<"+"<<num2<<" = "<<x;
    }
    void sub(){
        double x = num1-num2;
        cout<<num1<<" - "<<num2<<" = "<<x;
    }
    void divide(){
        double x = num1/num2;
        cout<<num1<<" / "<<num2<<" = "<<x;
    }
    void mult(){
        double x = num1*num2;
        cout<<num1<<" * "<<num2<<" = "<<x;
    }
};

int main(){

    Calcutor cal;
    cout<<"Enter 1st no.=";
    cin>>cal.num1;
    cout<<"Enter 2nd no.=";
    cin>>cal.num2;

    int op;
    cout<<"What Opertion do you wanna do 1 for add, 2 for sub, 3 for division, 4 for multiplication=";
    cin>>op;

    op==1?cal.add():op==2?cal.sub():op==3?cal.divide():cal.mult();



    return 0;
}
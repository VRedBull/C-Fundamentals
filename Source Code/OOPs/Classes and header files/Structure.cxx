#include<iostream>
using namespace std;

struct Data
{
    int x,y;
    void display();
};

    void Data::display(){
        cout<<x<<" "<<y<<endl;
    }

class Data2{
    public:
    int x,y;
    void dis(){
        cout<<x<<" "<<y;
    }
};

int main(){
    Data d;
    d.x=20;
    d.y=30;
    d.display();

    Data2 d2;
    d2.x=10;
    d2.y=15;
    d2.dis();
}
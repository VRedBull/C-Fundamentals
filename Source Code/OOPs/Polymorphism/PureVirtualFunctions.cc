#include <iostream>
using namespace std;

class Car{     //Observe that this is a "Car" is general term used and nothing like Car exists in real world, but different models of it exists
                //therefore it's a abstract class
public:
    virtual void start() = 0;
    virtual void seats() = 0;

};

class Innova: public Car{
    public:

    void start(){
        cout<<"Innova Started"<<endl;
    }

    void seats(){
        cout<<"8 seats in Innova"<<endl;
    }
};

class Swift:public Car{
    public:
    void start(){
        cout<<"Swift started"<<endl;
    }
    void seats(){
        cout<<"5 seats in Swift"<<endl;
    }
};
int main(){

    Car *c = new Innova();
    c->start();
    c->seats();

    c=new Swift();
    c->start();
    c->seats();
}
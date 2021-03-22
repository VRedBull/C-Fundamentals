#include<iostream>
using namespace std;

class BasicCar{
    public:

    void Basic(){
        cout<<"Basic feature"<<endl;
    }

    void Drive(){
        cout<<"Drive"<<endl;
    }
};

class AdvCar: public BasicCar{
    public:
    void Adv(){
        cout<<"Advance car"<<endl;
    }
    void AirCond(){
        cout<<"Air conditioning"<<endl;
    }
};

int main(){
    BasicCar bc = AdvCar();   //Basic class pointer and AdvCar class object  
    AdvCar ad;
    BasicCar *b = &ad;
    b->Basic();
    b->Drive();
    bc.Basic();
    bc.Drive();
    // bc->Adv();       these features are not available since the pointer is of BasicCar and do not know
    // bc->AirCond();   the features of AdvCar
}
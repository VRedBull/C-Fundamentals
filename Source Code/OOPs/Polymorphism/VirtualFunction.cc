#include <iostream>
using namespace std;

class BasicCar{
    public:
    virtual void drive(){           
        cout<<"Basic Driving"<<endl;
    }

    void AirConditioner(){
        cout<<"No air conditioning in Basic Car"<<endl;
    }
};

class AdvanceCar: public BasicCar{
    public:
    void drive(){
        cout<<"Advanced Driving"<<endl;
    }

    void AirConditioner(){
        cout<<"Air Conditioning in Advanced Car"<<endl;
    }

    void AirBag(){
        cout<<"Airbag in Advanced Car."<<endl;
    }
};

int main(){
    AdvanceCar ac;
    ac.drive();             
    ac.AirConditioner();
    cout<<endl;

    BasicCar *bc = &ac;
    bc->drive();            //called the function in AdvanceCar since drive is a virtual function in BasicCar
    bc->AirConditioner();       //called the function in BasicCar
    // bc->AirBag();            cannot call the function because of object slicing
    cout<<endl;

    BasicCar *bc1 = new AdvanceCar();    //Just another way of making Base class pointer and derived class object
    bc1->drive();
    bc1->AirConditioner();
    cout<<endl;
}
# Base class pointer derived class object

In this we declare and Base class pointer and assign it to derived class so that it becomes a derived class object. 

But since this is a base class pointer it only knows the functions and variables of the base class pointer and not of the derived class.

for eg.

```c++
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
    BasicCar *bc = new AdvCar();   //Basic class pointer and AdvCar class object  
    bc->Basic();
    bc->Drive();
    // bc->Adv();       these features are not available since the pointer is of BasicCar and do not know
    // bc->AirCond();   the features of AdvCar
}

//output
Basic feature
Drive
```

Other way to the same thing as above.

```c++
	AdvCar ad;		//Obj of AdvCar
    BasicCar *b = &ad;		//Assigned to pointer of BasicCar
    b->Basic();	
    b->Drive();
```

But the other way around is not possible. 

i.e. we cannot make a pointer of a derived class and make it an object of derived class.

```c++
//Here the compiler will give an error	
Derived *d = new Base();
```

**Note** - If derived class is having overrides functions they will not be called unless base class functions are declared as virtual.




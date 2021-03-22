# Polymorphism



## Function Overriding

When there is a function of name say fun() in a parent class. And then a child class inherits from the parent class and also defines it's own fun() function. Then the function fun() is now overridden.

When the child class redefines it's own version of the inherited function it's called **Function Overriding**. Now whenever a object of child class called the function fun()... the overridden version defined in child class will be called.

```c++
#include<iostream>
using namespace std;

class Parent{
    public:
    void fun(){
        cout<<"Function in Parent"<<endl;
    }
};

class Child: public Parent{
    public:
    //@override  -  This notation is required in some languages to denote that it's a overriden function
    void fun(){
        cout<<"Function of Child"<<endl;
    }
};
int main(){
    Child c;
    c.fun();
    Parent p;
    p.fun();
}

//output
Function of Child
Function in Parent
```



But After we have overridden the function we can also call the parent class function using the scope resolution operator.

```
Child c;
c.Parent::fun();
```



**Note** - To override a function we must write exactly the same function. We should change it's signature and name.

For eg. we should not make the function with parameter in the child class.

**• Function overriding is used for achieving runtime polymorphism**



## Virtual Functions

When we make a base class pointer and assign it address of Derived class, what is do is called **Object Slicing**. 

[Object slicing](http://en.wikipedia.org/wiki/Object_slicing) happens when a derived class object is assigned to a base class object, additional attributes of a derived class object are sliced off to form the base class object.

When we call a overridden function through that base class pointer we will only be able to call the base class function and not the overridden function in derived class, because of Object Slicing. 

But there is a way to call the Derived class function which overrides the Base class function. We can use **Virtual functions** here.

We can make Base class function as virtual so as to call the Derived class function which overrides the Base class function through the Base class pointer and derived class object.

Eg. here...

```c++
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
};

int main(){
    AdvanceCar ac;
    ac.drive();             
    ac.AirConditioner();
    cout<<endl;

    BasicCar *bc = &ac;
    bc->drive();            //called the function in AdvanceCar since drive is a virtual function in BasicCar
    bc->AirConditioner();       //called the function in BasicCar
    cout<<endl;

    BasicCar *bc1 = new AdvanceCar();    //Just another way of making Base class pointer and derived class object
    bc1->drive();
    bc1->AirConditioner();
    cout<<endl;
}

//output
Advanced Driving
Air Conditioning in Advanced Car

Advanced Driving
No air conditioning in Basic Car

Advanced Driving
No air conditioning in Basic Car
```

The above is a example of **Run-time Polymorphism**.

If not understood here go watch the Abdul Bari C++ video in Polymorphism module.



## Abstract class and Pure Virtual Function (Run-time polymorphism)

https://www.geeksforgeeks.org/pure-virtual-functions-and-abstract-classes/ - Good Article on this topic

- Polymorphism is achieved when we override a function of a Base class in another child class.

**Abstract class**

- Abstract classes are those classes which have the pure virtual functions. 
- And we cannot make Objects of abstract class. 
- But we can have pointers of the Abstract class.
- Abstract class can have concrete also. i.e. we can also define the body of a function in an abstract class.
- Abstract classes are used for achieving polymorphism

**Virtual Functions** 

- Pure Virtual functions are those functions which have headers in the base class (i.e. no body, only return type , function name and signature are written) and are implemented in the child/derived class. 
- If not implemented in derived class then the derived also becomes an abstract class.

example below

```c++
#include <iostream>
using namespace std;

class Car{     //Observe that this is a "Car" is general term used and nothing like Car exists in real world, but 				different models of it exists
                //therefore it's a abstract class
public:
    virtual void start() = 0;	//syntax to create a pure virtual function
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
//output
Innova Started
8 seats in Innova
Swift started
5 seats in Swift
```


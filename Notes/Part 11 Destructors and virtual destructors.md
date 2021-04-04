# Destructor and virtual destructor

- When creating a object we call the constructor of the class
- We use the constructor of the class to allocate the resources...eg. initialize variables etc.
- Similarly, we write the destructors of a class to deallocate the resources of the object.

```c++
#include<iostream>
using namespace std;

class Test{
    public:
    Test(){
        cout<<"Test object created"<<endl;
    }

    ~Test(){
        cout<<"Test object destroyed"<<endl;
    }
};

int main(){ 
    Test t;
    cout<<"after object created"<<endl;

    Test *p = new Test();       //when creating a object in heap memory we have destroy the object manually.
    delete p;	    //this is like calling the destructor
}

//output
Test object created
after object created
Test object created
Test object destroyed
Test object destroyed
```



## Virtual Destructors

- Virtual Destructors are useful when we use a Base class pointer to a Derived class object.

- Without a Virtual Base class Destructor only Base class destructor is called and not the derived class destructor. 

- Since it's a object of Derived class, we should make a call to Derived class destructor also.

For eg.

```c++
#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Base constructor"<<endl;
    }

    virtual ~Base(){
        cout<<"Base Destructor"<<endl;
    }
};

class Derived:public Base{
    public:
    Derived(){
        cout<<"Derived constructor"<<endl;
    }
    ~Derived(){
        cout<<"Derived Destructor"<<endl;
    }
};


int main(){
    Base *b = new Derived;
    delete b;
}
//output
Base constructor
Derived constructor
Derived Destructor
Base Destructor
```


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
    delete p;
}
```


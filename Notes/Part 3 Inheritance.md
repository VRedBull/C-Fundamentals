# Inheritance

- It is a process of acquiring features of an existing class into a new class.
- It is used for achieving reusability.
- Features of base class will be available in derived class.

```c++
#include<iostream>
using namespace std;

struct A{
    void funA(){
        cout<<"A"<<endl;
    }
};

struct B : A{
    void funB(){
        cout<<"B"<<endl;
    }

};
int main(){ 
    B b;
    b.funA();
    b.funB();
}
//output
A
B
```



## Constructors in Inheritance

- Constructors of base class is executed first then the constructor of derived class is executed.
- By default, non-parameterized constructor of base class is executed.
- Parameterized constructor of base class must be called from derived class constructor

When we make a child class constructor then....Constructor of parent class will always be called before the child class constructor.

for eg.

```c++
#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Base default"<<endl;
    }
    Base(int x){
        cout<<"Base Parameterized "<<x<<endl;
    }
};

class Derived:public Base{
    public:
    Derived(){
        cout<<"Default of Derived"<<endl;
    }
    Derived(int x){
        cout<<"Parameterized of Derived "<<x<<endl;
    }
    Derived(int x, int y):Base(x){      //will call base constructor passing value x
        cout<<"Calling base Constructor through Derived Constructor " <<x<<" "<<y<<endl;
    }
};

int main(){
    Derived d1;    //will first make the call to base class then it's own class constructor 
    cout<<endl;
    Derived d2(2);      //first non-parameterized constructor of base class then parameterized of derived class
    cout<<endl;
    Derived d3(4,5);    
}
//output
Base default
Default of Derived

Base default
Parameterized of Derived 2

Base Parameterized 4
Calling base Constructor through Derived Constructor 4 5
```



## isA and hasA Relationship 

When a **class Child** inherits from a **class Parent** then the **child isA Parent** relationship is there.

When a **class XYZ** makes a object of a **class ABC**, then **XYZ hasA object of ABC**. 

```c++
class Parent{
	//code
}
class Child : public Parent{		//here it is Child isA Parent relationship
	//code
}

class XYZ{
	public:
	Child c;	//Here XYZ hasA Child relationship occurs
}
```



## Access Specifiers

There are three types of Access Specifiers in OOP

1. **Private** - Variables and other data members which are declared private are accessible from anywhere inside their own class.
2. **Protected** - Variables and other data members which are declared protected are accessible from the class in which they were declared in and also whatever class inherits from that class.
3. **Public** - Variables which are public are accessible from within their own class as well as the class which inherits from them and the classes that makes a object of them.

For eg.

```c++
#include<iostream>
using namespace std;

class Base{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    void funBase(){
        a=10;       //all these are accessible from inside the class
        b=20;
        c=30;
    }
};

class Derived:public Base{
    void funDerived()
    {
        // a=15;  cannot access this value as it's private
        b=25;   //b is protected and c is public so it is accessible by Derived class
        c=35;
    }
};

class Object{
    Base b1;
    void funObject(){
        //Can only access the public members through object
        b1.c=100;
    }
};

int main(){
}
```



## Types of Inheritance

1. **Single level Inheritance** - This is achieved when there a child class inherits from the parent class. A single parent and single child are involved.

2. **Hierarchical Inheritance** -  This is when there are multiple children of a single parent . A single parent and multiple children are involved in this Inheritance.

3. **Multi-Leveled Inheritance** - When class A inherits class B and class B inherits class C.  So C is like the grandparent of class A and class B is the parent of class A. So there is multiple level of inheritance involved here.

4. **Multiple Inheritance** - When there are multiple parents of a single child. In this there are multiple base class and only a single derived class.

   1. This type of inheritance where there are multiple parents involved does not exists in languages like java. There we will have to use interface instead of a class to achieve this type of inheritance. 

   2. But this type of inheritance comes with it's own drawbacks.

   3. When class A is a parent of class B and C,  and Both class B and C are in turn parent's of class D. Then there is a function in class A which we want to call through the object of class D. Then there arises a ambiguity problem.

      <img src="D:\Programming\Programming fundamentals\C++ Fundamentals\Need-of-virtual class-in-C.jpg" style="zoom:50%;" />

      

When any data / function member of class **A** is accessed by an object of class **D**, ambiguity arises as to which data/function member would be called? One inherited through **B** or the other inherited through **C**. This confuses compiler and it displays error.

Here we will need Virtual class to solve this ambiguity problem.

```c++
#include <iostream> 
using namespace std; 

class A { 
public: 
	void show() 
	{ 
		cout << "Hello from A \n"; 
	} 
}; 

class B : public virtual A { 
}; 

class C : public virtual A { 
}; 

class D : public B, public C { 
}; 

int main() 
{ 
	D object; 
	object.show(); 
} 
//output
Hello from A
```

The class **A** has just one data member **a** which is **public**. This class is virtually inherited in class **B** and class **C**. Now class **B** and class **C** becomes virtual base class and no duplication of data member **a** is done.



## Ways of Inheritance

A class can be inherited in flowing ways:

- Publicly - All members of base will have same accessibility in derived class.
- Protectedly - All members of base will become protected in derived class.
- Privately - All members of base will become private in derived class.

for eg.

```c++
#include <iostream>
using namespace std;

class A{
    private:
    int a =10;
    protected:
    int b=20;
    public:
    int c=30;
};

class B: protected A{       //Inheriting class A protected
    void funB(){
        b=25;       //All inherited members from class A are protected       
        c=35;
    }
};

class B2: public B{
    void funB2(){
        b=21;       
        c=31;
    }
};

class C: private A{     //Inheriting class A privately
    void funC(){
        b=35;
        c=45;
    }
};

class D : public C{
    void funD(){
        // b=20;   Not accessible since all members inherited from C become private for the class D
    }
};

int main(){
    B b;
    A a;
    cout<<a.c;
    // cout<<b.c;       Not accessible through class B since all members of A inherited become protected.
}
```

This type of inheritance is only available in c++ and not in any other languages like java.

In Java we are not given any choice how we want to inherit a class. 

## 

## Generalization vs Specialization

Below are the example of **Specialization** :

- A Cuboid is just a Rectangle with added features like height and volume. So a Cuboid is a Specialized Rectangle.
- Similarly, A swift dezire is just a Swift with added features like more luggage space. So a Swift dezire is Specialized Swift.

Both the parent and the child class exists in the real world in the above examples. 

Below are the examples of **Generalization** :

- A Rectangle is a Shape, a Circle is a Shape, a Pentagon is a Shape. So, Shape is a general term used to describe rectangle, circle, pentagon. But Shape itself doesn't exists. So, a Shape is a General class.
- A Innova is a Car, a swift is a Car, a toyota is a Car. So, Car is a general term used to describe Innova, swift, toyota etc. But a Car itself doesn't exist. So Car is General class.

So this is a example of polymorphism, we have same general names for different things.


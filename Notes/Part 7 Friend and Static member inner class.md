# Friend functions and Friend classes

### 

## Friend Functions

- In a class a Member function can access all the private, protected and public properties of that class. 
- But a function outside the class cannot access private or protected members of that class.
- So to access private and protected members of a class outside the class in a function. We have to declare the function as a friend inside the class.
- After declaring the function as a friend inside the class we can access all the members(private and protected included) of the class **through a object of the class.**

For eg.

```c++
#include <iostream>
using namespace std;

class Base{
    private:
    int a;
    protected:
    int b;
    public:
    int c;

    friend void fun();      //We will declare these functions as friend of this Base class
    friend int main();      //We can even declare main() as a friend
};

void fun(){
    Base b;
    b.a=25;     //Since it's friend function it can access all the members of the class through the object
    b.b=35;     //It can even access private and protected as if it was a member function of that class.
    b.c=45;
}

int main(){
    Base b;
    b.a=10;
    b.b=20;
    b.c=30;
}
```



## Friend class

- Similarly, as a friend function we can make class as a friend of another class so to access the other class's private and protected members.
- We can access private and protected members through a object of the class.

For eg.

```c++
#include <iostream>
using namespace std;

class XYZ;		//Just a header so that the complier knows that there is a class XYZ afterwards which is a friend

class ABC{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    
    friend XYZ;		//Declaring the XYZ as a friend so it can access the private and protected of ABC class
};

class XYZ{
    public:
    ABC abc;		//Can only access the private and protected members of ABC through object of ABC class
    void fun(){
    abc.a=10;		//this is a private member of abc but still we can access it since XYZ is a friend.
    abc.b=20;
    abc.c=30;
    }
};

int main(){
    
}
```





# Static Members 

### Static Variables

- Static members are those members which are same for all the objects. It won't get initialized for different objects, it only gets initialized once . Because of this reason **static variables can not be initialized using constructors.**
- i.e. the value of a static variable will remain same of every object and if we change it through one of the object then it will change for every object of that class.
- This is useful for implementing [coroutines in C/C++](https://www.geeksforgeeks.org/coroutines-in-c-cpp/) or any other application where previous state of function needs to be stored.

for eg.

```c++
#include<iostream>
using namespace std;

class Test{
    private:
    int a,b;
    public:
    static int count;
    Test(){         //cannot initialize a static var inside a constructor, as it's same for all the objects of class
        a=10;
        b=20;
        count++;
    }
};

int Test::count=0;      //have to intialize it outside the class using a scope resolution operator

int main(){
 Test t1;       //incremented count from 0 to 1
 Test t2;       //incremented count from 1 to 2
 cout<<t1.count<<endl;
 cout<<t2.count<<endl;
 t1.count=25;
 cout<<t2.count<<endl;
 cout<<Test::count<<endl;		//can also access it using scope res operator
}
//output
2
2
25
25
```

**Note** - We are allowed to invoke a static member function using the object and the ‘.’ operator but it is recommended to invoke the static members using the class name and the scope resolution operator.



### Static Functions

- Just like the static data members or static variables inside the class, static member functions also does not depend on object of class. 
- **Static member functions are allowed to access only the static data members or other static member functions**, they cannot access the non-static data members or member functions of the class.
- But a normal function can access a static variable.

for eg. 

```c++
#include<iostream>
using namespace std;

class Test{
    public:
    int a = 10;
    static int b;
    static void fun(){
        // a++;  cannot access a non-static variables inside a static function
        b++;    //static functions can only access static variables
        cout<<"A static function"<<endl;
    }
};

int Test::b=0;  //have to instantiate a static variable using scope res op

int main(){
    Test t;
    t.fun();
    Test::fun();
}
```



## Inner classes or Nested Class

We can create a class inside another class. It's meant to be used when there's too much complexity inside a class.

We can create a class like this . ...

```c++
#include<iostream>
using namespace std;

class Outer{
    public:
    int a = 10;
    static int b;
    
    class Inner{
        public:
        void display(){
            cout<<"Display of inner class"<<endl;
        }  
    };
};

int Outer::b = 20;

int main(){
    Outer::Inner i;     //We can make the object of Inner class like this
    i.display();
}
//output
Display of inner class
```


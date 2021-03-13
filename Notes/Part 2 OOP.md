# Object Oriented Programming System(OOPs)

## Writing a Class

- A class can have functions and data(variables).
- Function inside class don't occupy memory but the variables do when the object of the class are instantiated. 
- Each class variable will get a separate memory location when instantiated with different objects.

for eg.

```c++
#include <iostream>
using namespace std;

class Rectangle{
    public:
    int length,breadth;

    int area(){
        return length*breadth;
    }
    int primeter(){
        return 2*(length*breadth);
    }
};


int main(){
    Rectangle r1,r2;
    r1.length=10;
    r1.breadth=5;
    cout<<r1.area()<<endl;
    cout<<&r1<<endl;
    cout<<&r1.length<<endl;
    cout<<&r1.breadth<<endl;

    r2.length=10;
    r2.breadth=50;
    cout<<r2.area()<<endl;
    cout<<&r2<<endl;
    cout<<&r2.length<<endl;
    cout<<&r2.breadth<<endl;

}
//output
50
0x61ff08
0x61ff08
0x61ff0c
500
0x61ff00
0x61ff00
0x61ff04
```



## Pointer to object in heap

- We can use pointer to create objects of classes.
- And those pointer objects will store the data in **heap** rather than in stack.
- Using **new** keyword will help us create the object in heap memory.

```c++
#include <iostream>
using namespace std;

class Rectangle{
    public:
    int length,breadth;

    int area(){
        return length*breadth;
    }
    int primeter(){
        return 2*(length+breadth);
    }
};

int main(){

    //Two methods to access the data members of class through pointers

    //Method one 
    Rectangle r;
    Rectangle *p;
    p=&r;
    p->length=20;
    p->breadth=30;
    cout<<p->area()<<endl;
    cout<<p->primeter()<<endl<<endl;

    //Method two
    Rectangle *ptr = new Rectangle();   //Creating pointer object which will store memory in heap rather than in stack. 
    ptr->length=50;
    ptr->breadth=60;
    cout<<ptr->area()<<endl;
    cout<<ptr->primeter()<<endl;
}

//output
600
100

3000
220
```



## Data Hiding

Data Hiding is necessary as other programmers shouldn't meddle with the data. Like for eg. if for 

### Using getters and setters

```c++
#include <iostream>
using namespace std;

class Rectangle{
    private:        //Variables in classes are also called Data members or Properties
    int length,breadth;

    public:

    //getters and setters to modify the data indirectly
    void setLength(int l){          //Setters are called mutators
        l>=0?length=l:length=0;		
    }
    void setBreadth(int b){
        b>=0?breadth=b:breadth=0;
    }
    int getLength(){                //Getters are Accessors
        return length;
    }
    int getBreadth(){
        return breadth;
    }

    //Normal functions of a class
    int area(){
        return length*breadth;
    }
    int primeter(){
        return 2*(length*breadth);
    }
};
int main(){
    Rectangle r;

    r.setLength(20);
    r.setBreadth(30);
    cout<<r.getLength()<<endl;
    cout<<r.getBreadth()<<endl;
    cout<<r.area()<<endl;
    cout<<r.primeter()<<endl;
}

//Output
20  
30  
600 
1200
```

Now, In this above example the user of this class cannot enter negative values, if they do it'll default to 0. Thus, the  area cannot ever be negative.

## 

## Constructors

When we declare a variable in a class we should also initialize it and give it some default value. Otherwise, it'll have some garbage value. 

Types of Constructors 

1. **Default Constructors** - Constructors that are present by default in the g++ compiler. And are called when a object of the class declared.

   ```c++
   class Rectangle {
       
   }
   int main(){
   Rectangle r;		//Since there are no defined constructor the default constructor will be called.
   }
   ```

   

2. **Non-parameterized Constructor** - This just same as before. No parameters passed while declaring an object.

3. **Parameterized Constructor** - While declaring a object we will pass some variables to initialize some of the variables in class.

   for eg. 

   ```c++
   #include <iostream>
   using namespace std;
   
   class Rectangle{
       private:
       int length,breadth;
       
       public:
       Rectangle(int a =0, int b=0){	//here length and breadth will be zero if no values are passed while 										//declaring an object
           setLength(a);
           setBreadth(b);
       }
   
       void setLength(int l){
           l>=0?length=l:length=0;
       }
       void setBreadth(int b){
           b>=0?breadth=b:breadth=0;
       }
       int getLength(){                
           return length;
       }
       int getBreadth(){
           return breadth;
       }  
   };
   int main(){
       Rectangle r1,r2(10,20);
       cout<<r1.getBreadth()<<endl;        //Default values for the r1 object
       cout<<r1.getLength()<<endl;
       cout<<r2.getLength()<<endl;         //Initialized the variables with passed arguments
       cout<<r2.getBreadth()<<endl;
   }
   //output
   0
   0
   10
   20
   ```

   - For eg. when you go to a shop and ask for a pen, then the shopkeeper will give you a pen that is probably most popular or the one that the shopkeeper have. So that is the example of a default constructor or non-parameterized constructor.
   - Another case when you ask for a specific brand and color of a pen and the shopkeeper gives you that particular pen then it is a example of a parameterized constructor.
   - And now in this case you take a specific pen with you to the shop and ask the shopkeeper to give you this same kind of pen. This is a example of a Copy constructor. 

4. **Copy Constructor** - A copy constructor is a constructor which copies the property of a object to a new object.

   ```c++
   #include <iostream>
   using namespace std;
   
   class Rectangle{
       private:
       int length,breadth;
   
       public:
       Rectangle(int a =0, int b=0){
           setLen(a);
           setBred(b);
       }
   
       Rectangle(Rectangle &rect){     //This is a copy constructor
           length=rect.length;
           breadth=rect.breadth;
       }
       void setLen(int a){
           length=a;
       }
       void setBred(int b){
           breadth=b;
       }
   
       int getLen(){
           return length;
       }
       int getBred(){
           return breadth;
       }
   };
   int main(){
       Rectangle r(10,20);
       cout<<r.getLen()<<endl;
       cout<<r.getBred()<<endl<<endl;
   
       Rectangle r1(r);            //This is calling the copy constructor
       cout<<r1.getLen()<<endl;    //here r1 object will have same values as object r
       cout<<r1.getBred()<<endl;
       return 0;
   }
   //output
   10
   20
   
   10
   20
   ```

   **Deep Copy Constructor** - There are some problems with the copy constructor so then we use a copy constructor.

   ```c++
   #include <iostream>
   using namespace std;
   
   class Test{
       private:
       int a;
       int *p;
       public:
       Test(int a1){
           a=a1;
           p=new int [a];
       }
       Test(Test &a1){
           a=a1.a;
           // p=a1.a;      Cannot write like this it'll only point to the existing array of object t so we need to create a new array using new keyword
           p=new int[a];      //by taking into account this we use a deep copy constructor
       }
   };
   
   int main(){
       Test t(5);
       Test t1(t);
       return 0;
   }
   ```

   

## Writing a Perfect class

To write a Perfect class we need to write a set of functions in class. Below given constructors and functions should always be present in a class to write a Perfect class

```c++
#include <iostream>
using namespace std;

//Headers of the class
class Rectangle{
    private:
    int length, breadth;

    public:
    //Constructors
    //Rectangle();        
    Rectangle(int a=0, int b=0);
    Rectangle(Rectangle &r);

    //Mutators
    void setLength(int l);
    void setBreadth(int b);

    //Accessors
    int getLength();
    int getBreadth();

    //Facilitators
    int area();
    int preimeter();

    //Enquiry
    int isSquare();

    //Destructor
    ~Rectangle();

};

int main(){
    Rectangle r;
}
```

• **Destructor** - used for releasing resources used by object

### Scope Resolution Operator

Whenever we write a function inside a class the function itself is copied (in the generated machine code) at the site of the function call and therefore it will be called a **inline function**. So to avoid this copying and pasting of the whole function every time we call the function we need to use Scope Resolution Operator.

Example of a Scope Resolution Operator

```c++
#include <iostream>
using namespace std;

class Rectangle{
    private:
    int len,bred;
    public:
    Rectangle(int a=0, int b=0){		//Writing the inline constructor
        len=a;
        bred=b;
    }

    Rectangle (Rectangle &r);		//Just writing the header here and the body of this constructor is somewhere 									//else

    int area(){				//This is a function will be copied everytime this function is called
        return len*bred;
    }

    inline int perimeter();		//Will write the body of this function using the scope Resolution operator
};		//Notice the keyword inline ... it's there so even though the body is outside the function it's still a 		//inline function because we used that keyword.

Rectangle::Rectangle(Rectangle &r){		//The double colon :: is called Scope Resolution Operator
    len=r.len;
    bred=r.bred;
}

int Rectangle::perimeter(){	
    return 2*(len+bred);
}


int main(){
    Rectangle r1(10,30);
    cout<<r1.area()<<endl;
    cout<<r1.perimeter()<<endl<<endl;

    Rectangle r2(r1);
    cout<<r2.area()<<endl;
    cout<<r2.perimeter()<<endl;
}
//output
300
80

300
80
```

Whenever we write a function using a Scope Resolution Operator the function itself will not be copied at the site of call but will be written separately in the machine code and whenever there is a call it'll go the function and execute the function and then return back and continue the program.

**Note** : We should always use Scope Resolution Operator to write functions in C++, It's just a good practice. Even if we write a function inside a class, it should not be very complex.

### This Pointer

**this** pointer is used when we don't want to use different variable names in the formal parameters in function. 

For eg.

```c++
#include <iostream>
using namespace std;

class Rectangle{
    private:
    int length,breadth;
    public:
    Rectangle(int length,int breadth){
        this->length=length;			//here we used this pointer
        this->breadth=breadth;		//this refers to the variable inside the class
    }
    int getlength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
};

int main(){
    Rectangle r(10,30);
    cout<<r.getlength()<<endl<<r.getBreadth()<<endl;
    return 0;
}

//output
10
30
```



## Structure  (Struct)

Structure or **Struct** is just as same as class in C++. Only difference between class and Struct in C++ is that by default everything is private in class and everything is public in struct. To make it everything public in class we have to use keyword **public**.

```c++
#include<iostream>
using namespace std;

struct Data
{					//No need to make these public to use them from outside the structure
    int x,y;		//but can make these private using the keyword private: just like in a class
    void display();
};

void Data::display(){		//can use scope resolution op. also in struct
    cout<<x<<" "<<y<<endl;
}

class Data2{
    public:		//must use public to make functions and properties accessible from outside the class
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
//output
20 30
10 15
```


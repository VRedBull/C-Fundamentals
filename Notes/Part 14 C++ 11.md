# Auto

- Auto is a generic data type keyword. If a variable is of auto data type then we can assign any variable to it.
- decltype(x) abbreviation of *declaration of type* we use this to copy the datatype of variable x and use it on another variable.

For eg.

```c++
#include<iostream>
using namespace std;

auto fun(){
    return 24*7.234-32*'a';
}

int main(){
    auto f = 'a';               //This is generic type of variable declaration we can assign anytype of data to it
    decltype(f) x = 0+'a';    //this says that it's same type as f variable
    double a = fun();
    cout<<x<<endl;
    cout<<a+f+x;
}
//output
k
-2726.38
```



# Final 

- **final** is a keyword that can be used in function so as not to be overridden derived class
- **final** can be used so that no other class derive from the final class.

For eg.

```c++
#include<iostream>
using namespace std;

class Base{
    virtual void fun() final{      //a final function must be virtual

    }
};

class Derived:public Base{
    // void fun(){}             //error msg: cannot override 'final' function "Base::fun"
};


// _______________________________________________________________________________________


class Base1 final {

};

// class Derived1 : public Base1{ };    error msg: a 'final' class type cannot be used as a base class

int main(){

}
```



# Lambda functions ( Unnamed functions)

- Lambda function can also be called as unnamed functions.
- Lambda functions by default do not have any name.
- So we should call them right after the body of the lambda function.
- If we want to give the function a name then we can assign a variable to it. (maybe of auto type).

Format of Lambda function 

**[Capture-list] (parameter list) -> return type { body };**

Generally return-type part can be ignored but in some complex case as in conditional statement, compiler can’t make out the return type and we need to specify that.

- **Capture-list** - is the list of variables outside the lambda function we provide that can be accessed from inside the lambda function.

- We can also provide reference to the variables if we want to change the values.

- for eg.

  ```c++
  #include<iostream>
  using namespace std;
  
  int main(){
      /*--------------------------------------------------------------------------------------*/
      
      [](){
          cout<<"Simplest lambda function"<<endl;
      }();       //calling from inside the lambda function
  
      /*--------------------------------------------------------------------------------------*/
  
      auto x = [](){
          cout<<"Lambda function assigned to another variable and called from outside"<<endl;
      };
      x();        //calling lambda function from outside
  
      /*--------------------------------------------------------------------------------------*/
  
      auto y = [](int a1, int b1)->int{       //Lambda function with parameters
          return a1>0 && b1>0 ? a1+b1 : 0;
      };
      cout<<y(25,30)<<endl;   
  
      /*--------------------------------------------------------------------------------------*/
      
      int a = 10, b = 20, c = 30;
  
      [&a,&b,c](){   //capture list gives access to the variables we want access
          cout<<++a<<" "<<++b<<" "<<c<<endl;    /*can also modify them if we provide the reference of the*/ 		}();                              		 //variables in capture list
  
      [ & ](){          //just writing '&' will provide reference to all variables 
          cout<<++a<<" "<<++b<<" "<<++c<<endl;
      }();
      cout<<a<<" "<<b<<" "<<c<<endl;     //changed values
  
  }
  
  //output
  Simplest lambda function
  Lambda function assigned to another variable and called from outside
  55
  11 21 30
  12 22 31
  12 22 31
  ```

  

# Smart pointer

- Since sometimes programmers can forget to delete the allocated memory in heap after use, which can cause memory leakage. 
- So smart pointers were introduced in C++11 for automatic garbage collection. 
- Smart pointer kind of act like a wrapper class to the object it's pointing.
- So when the pointer goes out of scope the pointer is deleted but also the object is also deallocated from the memory.

**Note** - To use smart pointers we need to include the memory header file using **#include<memory>**

There are three kind of smart pointer

1. **unique_ptr** 
   - This pointer will let only one pointer point to the object, it won't let another pointer point to the same object.
   - But we can let the other pointer point to the object by removing the initial pointer and transferring it to the other pointer.
2. **shared_ptr**
   - This pointer unlike the unique_ptr will let us point as many pointers we want to the object.
   - But this shared_ptr will maintain a count of all the pointers pointed to the object.
   - can use **ptr.use_count()** for knowing the no. of shared_ptr.
3. **weak_ptr** 
   - This is similar to the shared_ptr as it'll also let us use as many pointers as we want for the same object.
   - But it will not maintain a count of all the pointers.



# Delegation of Constructor

Delegation of Constructor means to call a constructor from another constructor

for eg.

```c++
#include<iostream>
using namespace std;

class Test{

    public:

    int a = 20, b = 30;

    Test(int a, int b){
        this->a=a;
        this->b=b;
    }
    
    Test():Test(1,1){       //calling another constructor from one constructor
        //this is delegation of constructor 
    }
};

int main(){
    Test t1, t2(2,3);
    cout<<t1.a<<" "<<t1.b<<endl;
    cout<<t2.a<<" "<<t2.b<<endl;

}

//output
1 1
2 3
```



# Ellipsis (variable arguments)

Ellipsis is a feature which will allow for passing of variable no. of arguments to that same function.

for eg.

```c++
#include<iostream>
#include<cstdarg>			//included this header file for va_list class
using namespace std;

int sum(int n,...){         //int n will take the number of argument passed
    va_list list;		//va_list class is for variable arguments
    va_start(list,n);
    int x;
    int s=0;

    for(int i =0; i<n;i++){
        x=va_arg(list, int);
        s+=x;
    }

    return s;
}   

int main(){
    cout<<sum(3,10,20,30)<<endl;        //first argument passed i.e.3 indicates no. of parameters passed
    cout<<sum(5,1,2,3,4,5)<<endl;
}

//output
60
15
```

Printf and scanf of C language are example of ellipsis.


# Constants , Preprocessor Directives and Namespaces



## Constant qualifier

**const keyword** is attached with any method(), variable, [pointer variable](https://www.geeksforgeeks.org/pointers-in-c-and-c-set-1-introduction-arithmetic-and-array/), and with the object of a class it prevents that specific **object/method()/variable** to modify its data items value. 

for eg.

```c++
#include<iostream>
using namespace std;

int main(){
    int const x = 10;   //declaration and assignment on the same line
    // x++;    cannot change the value of a const variable

    // int *ptr = &x;  cannot have a pointer normal pointer for const variable

    int const *ptr1 = &x;        
    // ++*ptr1;     cannot change the value of a const even through a const pointer

    int y = 9;
    int const *ptr2 = &y;    
    // ++*ptr2; cannot increment a value of a variable through a const pointer
    ptr2 = &x;  //even though cannot change the value where it points but can change to where it points

}
```

Const uses in classes and methods

for eg.

```c++
class Data{
    public:
    int x = 10;
    void fun() const
    {
        //x++;  this will give an error since const functions cannot access a data member of class
    }
}
```

Pass by reference value example

```c++
#include<iostream>
using namespace std;

void fun(int const &a, int const &b){   
    cout<<a<<"  "<<b<<endl;
    // a++,b++; here after declaring the pass by value as const we cannot modify the passed values
    cout<<a<<" "<<b<<endl;
}

int main(){
    int x = 10, y = 20;
    fun(x,y);
    cout<<x<<" "<<y;
}
//output
10  20
10 20
10 20
```



## Preprocessor 

As the name suggests Preprocessors are programs that process our source code before compilation.

- They are instructions to compiler.
- They are processed before compilation.
- They are used for defining symbolic constant.
- They are used for defining functions.
- They also support conditional definition

**There are 3 main types of preprocessor directives:** 

- Macros
- File Inclusion
- Conditional compilation

1. **Macros** -  Macros are a piece of code in a program which is given some name. Whenever this name is encountered by the compiler the compiler replaces the name with the actual piece of code.

   for eg.

   ```c++
   #include<iostream>
   #define c cout			//can also define pre-defined standard objects
   #define length 5		//these are like global variables
   #define breadth 6
   #define Area(l,b)  (l*b)	//these are like functions
   #define msg(x) #x		//this can be used for printing strings
   
   using namespace std;
   
   int main(){
       c<<Area(length,breadth)<<endl;	//printing using c
       c<<msg(ABCD);
   }
   //output
   30
   ABCD
   ```

2. **File Inclusion** - This type of preprocessor directive tells the compiler to include a file in the source code program.

   we can include header files or standard files. These include standard files like printf(), scanf() etc.

3. **Conditional compilation** - Conditional Compilation directives helps to compile a specific portion of the program based on some conditions. This can be done with the help of two preprocessing commands ‘**ifdef**‘ and ‘**endif**‘. 

   For eg.

   ```c++
   #include<iostream>
   #define c cout
   #define length 5
   #define breadth 6
   #define Area(l,b)  (l*b)
   
   #ifndef length     	//conditional pre-processor statement 
   	#define length 7    
   #endif
   
   using namespace std;
   
   int main(){
       c<<Area(length,breadth); 		//length here will be 5 and not 7
   }
   ```



## Namespaces

- Namespaces are used when there's name conflicts between functions, classes and objects.

  for eg.

  ```c++
  #include <iostream>
  using namespace std;
  
  namespace first
  {
  void fun(){
      cout<<"Function 1"<<endl;
  }
  
  void bro(){
      cout<<"Bro from first namespace "<<endl;
  }
  }
  
  namespace second
  {
  void fun(){
      cout<<"Function 2"<<endl;
  }
  }
  
  namespace third{
      void fun(){
          cout<<"Function 3"<<endl;
      }
  }
  
  using namespace third;
  int main(){
      first::fun();
      first::bro();
      second::fun();
      fun();		//fun() from the third namespace will be automatically called since int main() is using thrid 					//namespace
  }
  ```

  
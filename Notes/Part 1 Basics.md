|                           Compiler                           |                         Interpreter                          |
| :----------------------------------------------------------: | :----------------------------------------------------------: |
| Compiler takes the source code and checks for error and if correct converts it into machine code. | While interpreter takes the machine code which is a .exe file and executes it. |

- There are some compiler and interpreter based languages like C++ and C. Which takes the source code and is checked for errors and then translated to machine code by the complier and then for execution it is handed over to the interpreter.
- Then there are some Interpreter based languages like JavaScript which directly runs on browser. The interpreter based language is executed directly line by line.
- Then there are some hybrid languages like Java and C#.
- **Compiler based languages like c++ are always faster then languages like JS.**

## Program Development and Execution

1. Editing	

   - Typing the code in the text editor or an IDE

2. Compiling

   - Checking for error and then translating the source code into machine code.

3. Linking

   - This is where the header files are copied (in a way linked) into our main file. This is done by the linker.

4. Loading

   - Loading our .exe file to the Main memory in CPU.

5. Execution

   - Running the .exe file in CPU.


### Data Types

| Data types | Size   |
| ---------- | ------ |
| int        | 2 or 4 |
| float      | 4      |
| double     | 8      |
| char       | 1      |

### 

## Increment and decrement operators

**Pre-increment operator**

++x;

```c++
int x=5,y;
y=++x;
//Output
y=6
    Since first increment is done then assignment is done
```

**Post-increment operator**

x++;

```c++
int x=5,y;
y=x++;
//Output
y=5
    Since first assignment is done then increment is done
```

**Pre-Decrement operator** **and Post-Decrement operator**

--x = Pre 

x-- = post		Similar to pre and post increment.



## Overflow

Overflow is a concept when we store more than a variable can handle. for eg. a char can only store from -128 to +127 but when we try to store more than 127 like 128... the variable will actually store -128.

```c++
#include <iostream>
using namespace std;

int main(){
    char a = 127;
    cout<<(int)a;
    return 0;
}
//output
127
```

After increasing a by 1.

```c++
#include <iostream>
using namespace std;

int main(){
    char a = 127;
    a++;
    cout<<(int)a;
    return 0;
}
//output
-128		note that it isn't 128 it's back to -128
```

It's cyclic like a clock.

for eg. clock starts at 1 and goes to 12.... after 12 it doesn't go to 13. but it goes back to 1. and if we decrement 1 by 1... then we go to 12. and not 0.

### note* :

For bitwise operations refer to 26th lecture. in 5th module of abdul bari in udemy.

## Enum 

Enum - Enumerated data type, this is a user defined data type. Is used for defining a group of constants under one name i.e. related constants under one name.

Fot eg. int, double, float, string...etc. are all pre=defined data types. But we can use enum to make our own data types.

Enum helps to give a code to a set of data types. For eg. if we take mon as day = 1, then the rest of variables subsequently becomes 2,3,4... and so on.

```c++
enum day{mon, tue, wed, thurs, fri, sat, sun};

//Here mon automatically takes the value of 0 and tue=1, wed=2... and so on.
// we can also define from where the value should start.

enum day{mon=1,tue, wed, thurs=10, fri, sat, sun};
//here tue automatically becomes 2, wed becomes 3 and so on....and since thurs=10 then fir=11
```



### TypeDef

typedef only makes things easier for the programmers. here's a example.

```c++
#include <iostream>
using namespace std;

typedef int marks;
typedef string names;
int main(){
    marks m1,m2,m3;
    names n1,n2,n3;
    m1=2;
    m2=42;
    m3=90;

    n1="Name1";
    n2="Name2";
    n3="Name3";

    cout<<n1<<" marks are = "<<m1<<endl;
    cout<<n2<<" marks are = "<<m2<<endl;
    cout<<n3<<" marks are = "<<m3<<endl;

    //typedef only makes things easier for the programmers, as if m1,m2... etc. are defined only by int m1,m2. we wouldn't know what these variables stood for.

}
```

 



## Switch case:

Switch case are control flow statements like if else... **But** they are faster than if else.

Since in switch case it directly executes the block of code that satisfies the given condition unlike in if else reading each and every condition.

Eg. of switch case.

```c++
#include <iostream>
using namespace std;

int main(){
    int day;
    cout<<"Enter day no.: ";
    cin>>day;

    switch (day)
    {
    case 1:
        /* code */
        cout<<"Mon";
        break;
    case 2:
        /* code */
        cout<<"Tue";
        break;
    case 3:
        /* code */
        cout<<"wed";
        break;
    case 4:
        /* code */
        cout<<"thur";
        break;
    case 5:
        /* code */
        cout<<"Fri";
        break;
    case 6:
        /* code */
        cout<<"Sat";
        break;
    case 7:
        /* code */
        cout<<"Sun";
        break;
    default:
    cout<<"Invaid";
        break;
    }
}
//Output
Enter day no.: 5
Fri
```

## 

## Nested for loops patterns

**Watch the Videos by abdul bari in C++ course in Loops section. Watch the Logic carefully.**



# Pointers

Pointers are just another type of variable which stores memory address of another variable.

```c++
//Let the address of x be 200/201 and address of p be 300/301
int main()
{
    int x=10;
    int *p;
    p=&x;
    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p<<endl;
    cout<<&p<<endl;		//since pointer is also a variable it also have a address inside memory
    cout<<*p<<endl;		//this is derefrencing or accessing the data where p is pointing.
    return 0;
}

//Output
10
0x61ff08
0x61ff08
0x61ff08    
10
```



## Most 3 Important lines in pointers

```c++
declaration  	int *p;
initialization 	p = &x;
dereferencing 	cout<<*p;
```

## Why use pointers?

Computer memory is divided in three sections while the program is running...

1. Heap
2. Stack
3. Code section

**<u>A program can directly access only two parts of the memory, the code section and stack. It cannot directly access the Heap section of the memory or any other part of the computer. The program can indirectly access Heap and other parts of the computer through the help of pointers.</u>** *The other parts of computer include keyboard, monitor, printer etc* .So that is why pointers are used.

Other languages like JAVA and C# do not have pointers. They access these other things through JVM or .NET . That is why system programming is only done in C++ or C and not JAVA or C#.  



## Dynamic arrays

In low-level programming languages like Cpp or C we don't have dynamic arrays. Meaning once the size of the array is specified we cannot change it. 

But, this is where the pointers come in. We can declare the pointer as an array and specify it's size, but then when we need to change the size the size of the array we can that as well.

What happens when we declare a normal array like. *int A[4];* is memory in stack is allocated to it. And it'll automatically deleted when it'll go out of scope. 

But when we declare a pointer array like. *int *p = new int [4];* this array memory is allocated in heap. And this memory will not be automatically deleted from heap. We must deleted it like *delete []p;*.

If we null the pointer before deleting it, it would cause memory leak, which is basically memory loss.

```c++
int main(){
    int A[4] = {32,34,-23,2};
    // int A[7];   Now this is not possible in cpp

    int *p = new int[7];
    for(int x=0; x<4; x++){
        p[x]=x+2;
        cout<<p[x]<<" ";
    }
    cout<<endl;
// but when we need to change the size of array we can deleted the array by following lines. and re-initialize it.
    delete []p;
    // p=nullptr;   we should always nullify the pointer after deleting it.

//After deleting we can also re-initialize it with array and change it's size
    p=new int[5];
    for(int x=0; x<5; x++){
        p[x]=x+3;
        cout<<p[x]<<" ";
    }
    return 0;
}
//Output
2 3 4 5 
3 4 5 6 7
```

Short example

```c++

    int A[3]={9,1,43};
    // int A[2];

    int *p = new int[3];
    //We can allocate the Values like this.
    p[0] = 2;
    p[1] = 4;

    //Now we need to change the size of the array then
    delete []p;
    p = new int[4];
```



## Pointer Arithmetic

There are only five types of arithmetic operations possible in pointers.

```c++
    int A[4]={23,12,89,77};
    int *p = A;     //The pointer stores the address of the 1st element in array.
    cout<<*p;

//Output
23
```

1. p++;

   This will move the pointer to the next element in the array. Basically point to the next element

2. p--;

   This will move the pointer back one location.

3. p=p+2;

   This will move the pointer to next to next location. i.e if the pointer is at 0 index then it'll go to 2nd index.

4. p=p-2;

   This will move the pointer to back two location.

5. ```c++
   	int A[4]={23,12,89,77};
       int *p = A, *q=&A[3];     //The pointer stores the address of the 1st element in array.
      
       cout<<p-q<<endl;
       cout<<q-p<<endl;
      
   //output
   -3	//this means the index of p<q... that means p is 3 elements left of q
   3
   ```

   

## Problems with pointers

1. uninitialized pointers 

   Just declaring a pointer but never initializing it by allocating it a address value.

2. memory leak

   When heap memory is allocated. But then pointer is nullified without deleting/deallocating the array in heap memory.

   ```c++
   int *p = new int[5];
   p=nullptr;		//Standard sytax in CPP no null pointer... but there are two more ways
   p=0;
   p=NULL;
   
   //Now this will cause memory leak. so we should always delete the pointer before nullfying it.
   delete []p;
   ```

3. dangling pointers

   Declaring a pointer in part of the program the deleting it in the other part of program. But then again using it in the program by mistake will cause errors.

   ```c++
   int main(){
   	int x=10;
   	int *p=&x;
   	fun(p);	
   	cout<<*p; //This line will cause error since this pointer is already deleted.
   }
   
   void fun(int *q){
   	------
   	------
   	------
   	delete []p; //here the pointer is deleted
   }
   ```

   

## Reference

Reference is a powerful tool in c++. And it is only available in C++ and not in any other language.

**Reference is not a separate variable, it's just another name for a assigned variable.**  

```c++
    int x = 10;
    int &y=x;	//This is how to declare and assign a reference...
    cout<<x<<endl;
    cout<<y<<endl;
    
    y=120;
    cout<<x<<endl;
    cout<<y;

	y++;
    cout<<x;

    cout<<&x<<"  "<<&y;		//Address is also same

//Output
10
10
120
120
121
0x61ff08  0x61ff08
```

- Reference does not have a separate memory address it is as same as the variable assigned to it.
- We cannot change the reference to any other variable after it's assigned to one. 
- Reference and declaration should be done on the same line.

## Function to a pointer

Function to a pointer is just a pointer that stores the address of a function. And can call the function. For eg.

**Eg. of void and no parameters function. And is called by a pointer.**

```c++
#include <iostream>
using namespace std;

void fun1();

int main(){
    void (*fp)();	//Declared a function pointer
    fp=&fun1;		//Assigned a function to the pointer
    (*fp)();	//Called the function.
}

void fun1(){
    cout<<"Called function 1"<<endl;
}
//Output
Called function 1
```

**Eg. of function with return type and parameters. And is called by a pointer**

```c++
#include <iostream>
using namespace std;

int max(int x, int y);
int min(int x, int y);

int main(){
    int (*fp1)(int,int);
    fp1=&max;
    cout<<"Maximum is="<<(*fp1)(10,5)<<endl;

    fp1=&min;
    cout<<"Minumun is="<<(*fp1)(-2,-12);
    return 0;
}

int max(int x, int y){
    int result = x>y?x:y;
    return result;
}

int min(int x, int y){
    int result = x<y?x:y;
    return result;
}

//output
Maximum is=10
Minumun is=-12
```

## 

## Function Overloading

Function overloading occurs when there are two different functions with same name but with different number of arguments / signature.

Function that differ only in their return type cannot be overloaded.

```c++
#include <iostream>
using namespace std;

int sum(int a, int b){
    return a+b;
}

float sum(float a, float b){
    return a+b;
}

int sum(int a, int b, int c){
    return a+b+c;
}

int main(){
    cout<<sum(23,11)<<endl;
    cout<<sum(9.21f,32.12f)<<endl;
    cout<<sum(-21,44,11)<<endl;
    return 0;
}
//output
34
41.33
34
```

**This is not allowed**

```c++
int sum(int a, int b){
 //code
}
float sum(int a,int b){
//code
}
```



## Template function

So template function is used when a two or more overloaded function have same type of code inside it and return the same thing.

For eg.

```c++
int maxim(int a, int b){
    return a>b?a:b;
}

float maxim(float a, float b){
    return a>b?a:b;
}

//the above two are overloaded function but with the same code inside them. So this is where the template function comes in to help.

template <class T>
    
T maxim(T a, T b){
    return a>b?a:b;
}

//This above template can now take arguments of any data type
```



## Default Argument 

Default Argument are some values already assigned to parameters, so when the values are not passed they take the default value. When the values are passed the value is taken and already assigned value is ignored.

```c++
int sum(int a,int b, int c=0){
    return a+b+c;
}

int main(){
    cout<<sum(2,-12)<<endl;
    cout<<sum(32,11,64);
    return 0;
}
//Output
-10
107
```

  

## Three Parameters passing methods in C++

### Pass-by-value

1. Pass-by-value: Values of Actual parameters are passed to formal parameters. Actual parameters cannot be modified by function.
2. Value of actual parameters are copied in formal parameters. 
3. If any changes done to formal parameters in function, they will not modify actual parameters.

```c++
#include <iostream>
using namespace std;

int swap(int a, int b){		//formal parameters
    cout<<a<<" "<<b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
 return a,b;
}

int main(){
    int x=12,y=23;
    swap(x,y);		//actual parameters
    cout<<x<<" "<<y<<endl;

    return 0;
}
//output
12 23
23 12
12 23
```



### Pass-by-Address

- Address of actual parameters are passed. 
- Formal parameters must be pointers.
- Formal parameters can indirectly access actual parameters.
- Changes done using formal parameters will reflect in actual parameters.

```c++
#include <iostream>
using namespace std;

void swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

int main(){
    int x=10,y=20;
    swap(&x,&y);
    cout<<x<<" "<<y<<endl;
    return 0;
}

//ouput
20 10
```



### Pass-by-Reference

- Actual parameters are passed as reference.
- Formal parameters can directly access actual parameters.
- Function call is converted into **inline function**, if not possible it will become call by address.
  - **Inline Function** - Which means that the function will be copied in place of function call in machine code.
- Reference don’t take extra memory.
- Syntax is same as Call by Value except, formal parameters are reference

```c++
#include <iostream>
using namespace std;

void swap(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}

int main(){
    int x=10,y=20;
    swap(x,y);
    cout<<x<<" "<<y;
    return 0;
}
//output
20 10
```



### Return by address

- A function can return address of memory.
- It should not return address of local variables, which will be disposed after function ends.
- It can return address of memory allocated in heap.

```c++
#include <iostream>
using namespace std;

int * fun(int n)
{
    int *p=new int[5]; 	//This memory is in heap
    for(int i=0;i<5;i++){
    p[i]=i+5;
    }
    return p;
}

int main()
{
    int *ptr=fun(5);
    for(int i=0;i<5;i++){
    cout<<ptr[i]<<endl;
    }
}

//output
5
6
7
8
9
```



### Return by Reference 

Remember that reference is another name for a already defined variable.

- A function call return reference.
- It should not return reference of its local variables. As they are wiped out of memory as soon as the function ends.
- It can return formal parameters if they are reference.

```c++
#include <iostream>
using namespace std;

int & fun(int &a){
    cout<<a<<endl;
    return a;
}

int main(){
    int x=10;
    cout<<x<<endl;
    fun(x)=20;
    cout<<x;
    return 0;
}
//Output
10
10
20
```



## Static Variables

- A local variable will remain inside the stack memory as long as the function is being run. As soon as the program gets out of the function the local variable will be destroyed from the stack memory.
- A global variable will remain in memory as long as the program is running and will be accessible by any function in the program.
- A static variable will also remain in memory as long as the program is running but will only be accessible by the function in which it is declared.

```c++
#include <iostream>
using namespace std;

int b = 30;

void fun(){
    static int x=20;
    int a=10;
    x++;        //this will remain in memory throughout the program but only accessible by this function
    a++;        //this var will be destroyed as soon as the function is over
    b++;        //this will remain in memory throughout the program and can be accessed by any function. 
    cout<<"Static Local var ="<<x<<", Local var = "<<a<<" ,Global var="<<b<<endl;
}

int main(){
    fun();
    fun();
    fun();
}
//output
Static Local var =21, Local var = 11 ,Global var=31
Static Local var =22, Local var = 11 ,Global var=32
Static Local var =23, Local var = 11 ,Global var=33
```

### Recursive function 

A function which calls itself with a condition so that it's not in an infinite loop. 

```c++
#include <iostream>
using namespace std;

void fun1(int n){
    if(n>0){
        cout<<n<<endl;
        fun1(n-1);
    }
}


void fun2(int n){
    if(n>0){
        fun2(n-1);
        cout<<n<<endl;
    }
}

int main(){
    fun1(5);
    cout<<endl;
    fun2(5);
}
//output
5
4
3
2
1

1
2
3
4
5
```


# Exception Handling

- Exceptions are Runtime errors.
- Try and catch blocks are used for handling exceptions.
- If exceptions are not handled then program may crash.
- Exceptions must give a message to the user, giving correct reason on cause of exception.
- A try block can be followed by Multiple catch blocks each catching different types of errors.
- Catch-All can catch all exception and can used as a default option for catching any type of error thrown.
- Catch-All must be a last block.
- A function can throw many exceptions, but may choose to handle some of them. 
- The other exceptions which are thrown, but not caught can be handled by caller. If the caller chooses not to catch them, then the exceptions are handled by caller of the caller. 
- If classes in inheritance are used in catch block then child class should come first.

for eg.

```c++
#include<iostream>
using namespace std;

int divide(int x, int y);

int main(){
    int a = 10, b = 5 , c;

    try{
        c=divide(a,b);
        cout<<c<<endl;
        divide(2,0);		//this line will go to if statement of divide()
    }catch(int e){
        cout<<"Caught exception"<<endl;
    }
    cout<<"End of program"<<endl;
}

int divide(int x, int y){
    if( y == 0){
        throw 0;	//exception thrown here will be caught by the caller i.e. main()
    }
    else{
        return x/y;
    }
}
//output
2
Caught exception
End of program
```



## Throw keyword

See below example

```c++
#include<iostream>
using namespace std;
class MyException:public exception{

};

int divide(int x, int y){
    if(y==0){
        cout<<"A 0 denominator"<<endl;
        throw 0;
    }
    else if(y<0){
        cout<<"A -ve num"<<endl;
        throw MyException();        //Can throw our own coustom made class object exception
    }
    else{
        return x/y;
    }
}

int main(){
    
    try{
        cout<<divide(10,2)<<endl;
        cout<<divide(10,-1)<<endl;
        
    }catch(int e){
        cout << "Caught "<<e<<endl;
    }
    catch(MyException e){
        cout<<"Caught MyException"<<endl;
    }
    catch(...){
        cout<<"Caught defult"<<endl;
    }

    //can write another try block with it's own catch block
    try{
        cout<<divide(10,0)<<endl;
    }
    catch(int e){
        cout << "Caught "<<e<<endl;
    }
    cout<<"END"<<flush;
}
//output
5
A -ve num
Caught MyException
A 0 denominator
Caught 0
END
```



## Catch keyword

- Catch block is used to catch exception thrown by try block.

- We can have different types of catch blocks to handle different types of exception such as int, float, string etc.

- We can also have a default type of catch block to handle all types of exceptions thrown, but it should always be defined as the last catch block.
- When catching exceptions we should always catch parent class exception 1st then child class

for eg.

```c++
#include<iostream>
using namespace std;

class MyException1{

};

class MyException2:public MyException1{

};

int main(){
    try{

    }catch(MyException2 e){
        //child class exception should always be caught 1st then parent class exception
    }catch(MyException1 e){

    }
}
```


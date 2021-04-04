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
        cout<<++a<<" "<<++b<<" "<<c<<endl;    //can also modify them if we provide the reference of the variables
    }();                               //in capture list

    [&](){          //just writing & will provide reference to all variables 
        cout<<++a<<" "<<++b<<" "<<++c<<endl;
    }();
    cout<<a<<" "<<b<<" "<<c<<endl;     //changed values

}
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
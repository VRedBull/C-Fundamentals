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
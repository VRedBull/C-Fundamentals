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
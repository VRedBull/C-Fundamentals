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
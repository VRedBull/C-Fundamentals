#include <iostream>
using namespace std;

class XYZ;

class ABC{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    
    friend XYZ;
};

class XYZ{
    public:
    ABC abc;
    void fun(){
    abc.a=10;
    abc.b=20;
    abc.c=30;
    }
};

int main(){
    
}
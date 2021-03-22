#include <iostream>
using namespace std;

class A{
    private:
    int a =10;
    protected:
    int b=20;
    public:
    int c=30;
};

class B: protected A{       //Inheriting class A protected
    void funB(){
        b=25;       //All inherited members from class A are protected       
        c=35;
    }
};

class B2: public B{
    void funB2(){
        b=21;       
        c=31;
    }
};

class C: private A{     //Inheriting class A privately
    void funC(){
        b=35;
        c=45;
    }
};

class D : public C{
    void funD(){
        // b=20;   Not accessible since all members inherited from C become private for the class D
    }
};

int main(){
    B b;
    A a;
    cout<<a.c;
    // cout<<b.c;       Not accessible through class B since all members of A inherited become protected.
}
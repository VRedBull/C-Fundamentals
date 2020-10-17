#include <iostream>

using namespace std;

class abc{
    public:
        notes(){
            cout<<"Hell"<<endl;
        }
};

class xyz{
    public:
        notes(){
            cout<<"Hi"<<endl;
        }
};

class sub: public abc, public xyz{

};

int main(){
    sub obj;
    xyz::notes();
}
#include <iostream>
using namespace std;

namespace first
{
void fun(){
    cout<<"Function 1"<<endl;
}

void bro(){
    cout<<"Bro from first namespace "<<endl;
}
}

namespace second
{
void fun(){
    cout<<"Function 2"<<endl;
}
}

namespace third{
    void fun(){
        cout<<"Function 3"<<endl;
    }
}

using namespace third;
int main(){
    first::fun();
    first::bro();
    second::fun();
    fun();
}
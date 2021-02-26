#include <iostream>
using namespace std;

typedef int marks;
typedef string names;
int main(){
    marks m1,m2,m3;
    names n1,n2,n3;
    m1=2;
    m2=42;
    m3=90;

    n1="Name1";
    n2="Name2";
    n3="Name3";

    cout<<n1<<" marks are = "<<m1<<endl;
    cout<<n2<<" marks are = "<<m2<<endl;
    cout<<n3<<" marks are = "<<m3<<endl;

    //typedef only makes things easier for the programmers, as if m1,m2... etc. are defined only by int m1,m2. we wouldn't know what these variables stood for.

}
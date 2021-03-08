#include <iostream>
using namespace std;

void fun1();
int max(int x, int y);
int min(int x, int y);

int main(){
    void (*fp)();
    fp=&fun1;
    (*fp)();

    int (*fp1)(int,int);
    fp1=&max;
    cout<<"Maximum is="<<(*fp1)(10,5)<<endl;

    fp1=&min;
    cout<<"Minumun is="<<(*fp1)(-2,-12);
    return 0;
}

void fun1(){
    cout<<"Called function 1"<<endl;
}

int max(int x, int y){
    int result = x>y?x:y;
    return result;
}

int min(int x, int y){
    int result = x<y?x:y;
    return result;
}
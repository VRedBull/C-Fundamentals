#include <iostream>

using namespace std;

void func( int *pi);


int main(){
    int i = 9;
    cout<<"1. Value: "<<i<<endl;
    func(&i);
    cout<<"\n3. Value: "<<i<<endl;
    return 0;
}

void func(int *pi){
    *pi = 50;
    printf("2. Value: %d", *pi);
}


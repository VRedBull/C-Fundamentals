#include <iostream>
using namespace std;

int swap(int a, int b){
    cout<<a<<" "<<b<<endl;
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<a<<" "<<b<<endl;
 return a,b;
}

int main(){
    int x=12,y=23;
    swap(x,y);
    cout<<x<<" "<<y<<endl;

    return 0;
}
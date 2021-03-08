#include <iostream>
using namespace std;

int * fun(int n)
{
    int *p=new int[5]; 	//This memory is in heap
    for(int i=0;i<5;i++){
    p[i]=i+5;
    }
    return p;
}

int main()
{
    int *ptr=fun(5);
    for(int i=0;i<5;i++){
    cout<<ptr[i]<<endl;
    }
}
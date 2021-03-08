#include <iostream>
using namespace std;

int main(){

    int A[4]={23,12,89,77};
    int *p = A, *q=&A[3];     //The pointer stores the address of the 1st element in array.

    cout<<p-q<<endl;
    cout<<q-p<<endl;
    return 0;
}
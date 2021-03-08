#include <iostream>
using namespace std;

int main(){
    int A[4] = {32,34,-23,2};
    // int A[7];   Now this is not possible in cpp

    int *p = new int[7];
    for(int x=0; x<4; x++){
        p[x]=x+2;
        cout<<p[x]<<" ";
    }
    cout<<endl;
// but when the pointer is not needed then we can deleted the array by following lines.
    delete []p;
    // p=nullptr;   we should always nullify the pointer after deleting it.

//After deleting we can also re-initialize it with array and change it's size
    p=new int[5];
    for(int x=0; x<5; x++){
        p[x]=x+3;
        cout<<p[x]<<" ";
    }
    return 0;
}
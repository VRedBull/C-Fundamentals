#include <iostream>

using namespace std;

int main(){
    int sand = 3;
    cout<<"Memory Adress: "<<&sand<<endl;

    int *sandPointer;  
    sandPointer = &sand;
    

    cout<<"Memory Address through pointer: "<<sandPointer<<endl;

    return 0;
}
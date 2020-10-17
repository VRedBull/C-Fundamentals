#include <iostream>

using namespace std;

int tuna = 823;     //Global tuna var

int main(){
    int tuna = 69;      //Local tuna var
    cout<<"Global: "<<::tuna<<endl; //The unary resolution 
                                    //scope operator will use the global variable
    cout<<"Local: "<<tuna<<endl;    //While this one is Local
    return 0;
}


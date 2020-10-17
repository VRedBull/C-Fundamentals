#include <iostream>
#include <cstdlib>  //c standard library
#include <ctime>        //this file have access to the time in computer 
using namespace std;

int main(){
            //srand(anyIntValue) this will change rand() algorithm
    srand(time(0)); //this just changes the algorithm used by rand
            //since time in sec is changing every second 
    for(int i = 0; i<20; i++)
    {  
        cout<<1+(rand()%6)<<endl;     //rand number genration method.
    }  
    return 0;
}
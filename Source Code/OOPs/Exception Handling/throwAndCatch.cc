#include<iostream>
using namespace std;

int divide(int x, int y);

int main(){
    int a = 10, b = 5 , c;

    try{
        c=divide(a,b);
        cout<<c<<endl;
        divide(2,0);		//this line will go to if statement of divide()
    }catch(int e){
        cout<<"Caught exception"<<endl;
    }
    cout<<"End of program"<<endl;
}

int divide(int x, int y){
    if( y == 0){
        throw 0;	//exception thrown here will be caught by the caller i.e. main()
    }
    else{
        return x/y;
    }
}

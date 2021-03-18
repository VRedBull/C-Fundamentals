#include <iostream>
using namespace std;

class Data{
    private:
    int x=10,y=20;
    
    public:
    friend int fun();  //Declaring a function as a friend of Data class so it can access all the data
};

int fun(){
    Data d;
    return d.x+d.y;     //can Access the private properties of class Data as it's declared as a friend function
}


int main(){
    cout<<fun();
}
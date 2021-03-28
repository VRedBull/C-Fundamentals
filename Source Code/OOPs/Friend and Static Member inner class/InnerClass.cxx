#include<iostream>
using namespace std;

class Outer{
    public:
    int a = 10;
    static int b;
    
    class Inner{
        public:
        void display(){
            cout<<"Display of inner class"<<endl;
        }  
    };
};

int Outer::b = 20;

int main(){
    Outer::Inner i;     //We can make the object of Inner class like this
    i.display();
}
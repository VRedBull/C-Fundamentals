#include<iostream>
#include<string>
using namespace std;

class Chicken{
    public:
        Chicken(string x){      //This is a constructor
            setName(x);         //Constructors are basically used to assign or intialize the variables of the class.
        }
    void setName(string n){
        name = n;
    }
    string getName(){
        return name;
    } 
    private:
        string name;
};

int main(){
    Chicken c("This my name now.");
    cout<<c.getName();
    return 0;
}
#include <iostream>
#include <string>
using namespace std;

class Vikas{
    public:
        void setName(string x){     //This is the setter Method
            name = x;
        }
        string getName(){       //This is the getter method
            return name;
        }
    private:        //It's just good programming practic to make the varibles private and access 
                    //them through the getter and setter methods
        string name;
};

int main(){
    Vikas obj;
    obj.setName("Vivaan");
    cout<<obj.getName();
    return 0;
}
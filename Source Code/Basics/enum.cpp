#include <iostream>
using namespace std;

enum day{
    mon=1,tue,wed=9,thurs,fri,sat,sun
};

int main(){
    day d;
    d=thurs;
    cout<<d;
    return 0;
}
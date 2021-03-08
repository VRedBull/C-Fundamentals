#include <iostream>
using namespace std;

int main(){
    int x = 10;
    int &y=x;
    cout<<x<<endl;
    cout<<y<<endl;
    
    y=120;
    cout<<x<<endl;
    cout<<y<<endl;

    y++;
    cout<<x<<endl;

    cout<<&x<<"  "<<&y;
    return 0;
}
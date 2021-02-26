#include <iostream>
using namespace std;

int main(){
    int day;
    cout<<"Enter day no.: ";
    cin>>day;

    switch (day)
    {
    case 1:
        /* code */
        cout<<"Mon";
        break;
    case 2:
        /* code */
        cout<<"Tue";
        break;
    case 3:
        /* code */
        cout<<"wed";
        break;
    case 4:
        /* code */
        cout<<"thur";
        break;
    case 5:
        /* code */
        cout<<"Fri";
        break;
    case 6:
        /* code */
        cout<<"Sat";
        break;
    case 7:
        /* code */
        cout<<"Sun";
        break;
    default:
    cout<<"Invaid";
        break;
    }
}
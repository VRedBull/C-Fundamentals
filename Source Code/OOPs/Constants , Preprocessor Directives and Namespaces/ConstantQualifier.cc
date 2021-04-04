#include<iostream>
using namespace std;

int main(){
    int const x = 10;   //declaration and assignment on the same line
    // x++;    cannot change the value of a const variable

    // int *ptr = &x;  cannot have a pointer normal pointer for const variable

    int const *ptr1 = &x;        
    // ++*ptr1;     cannot change the value of a const even through a const pointer

    int y = 9;
    int const *ptr2 = &y;    
    // ++*ptr2; cannot increment a value of a variable through a const pointer
    ptr2 = &x;  //even though cannot change the value where it points but can change to where it points

}
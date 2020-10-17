#include <iostream>

using namespace std;

void fun1( double arr[], int sizeOfArr){
    for(int i = 0; i<sizeOfArr; i++){
        cout<<arr[i]<<endl;
    }
}
void fun1( int arr[], int sizeOfArr){
    for(int i = 0; i<sizeOfArr; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int tuna[4] = {54,12,65,12};
    double book[3] = {12.31,345.56,78.453};
    fun1(tuna,4);
    fun1(book,3);
    return 0;
}

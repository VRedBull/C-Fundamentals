#include <iostream>
using namespace std;

int main(){

    typedef int array;
    array A[4][3]={
        {23,54,221},
        {-45,89,35},
        {-56,34,-65},
        {-12,67,231}
    };

    array B[4][3]={
        {23,54,221},
        {-45,89,35},
        {-56,70,-65},
        {-12,67,231}
    };

    array C[4][3];

    int TotalElements = sizeof(A)/sizeof(int);
    int rows = sizeof(A)/sizeof(A[0]);
    int column = sizeof(A[0])/sizeof(int);

    // int TotalElements = sizeof(B)/sizeof(int);
    // int rows = sizeof(B)/sizeof(B[0]);
    // int column = sizeof(B[0])/sizeof(int);
    
    // cout<<length;
    // cout<<column;
    for(int i=0; i<rows; i++){
        for(int j=0; j<column; j++){
            C[i][j] = A[i][j]+B[i][j];
        }
    }
    
    for(int i=0; i<rows; i++){
        for(int j=0; j<column; j++){
            cout<<(C[i][j])<<" ";
        }
        cout<<endl;
    }

    return 0;
}
#include<iostream>
using namespace std;

int main(){
    int table[10][10];
    for (int i = 0; i<10; i++){
        for (int j = 0; j<10; j++){
            table[i][j]=(i+1)*(j+1);
            cout<<table[i][j]<<" "<<flush;
        }
        cout<<endl;
    }
    return 0;
}
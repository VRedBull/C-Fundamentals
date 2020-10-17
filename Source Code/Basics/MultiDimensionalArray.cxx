#include<iostream>
using namespace std;

int main(){
    string fruits[][3] = {
        {"Apple", "Mango", "Lemon"},
        {"Banana", "Coconut", "BlueBerry"}
    };

    for (int i = 0; i<2; i++ ){
        for (int j =0; j<3; j++){
            cout<<fruits[i][j]<<" "<<flush;
        }
        cout<<endl;
    }
    return 0;
}
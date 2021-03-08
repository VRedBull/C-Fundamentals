#include <iostream>
using namespace std;

int main(){

    // typedef int x;
    // x count=1;
    // for(int i=0; i<=4; i++){
    //     for(int j=0; j<=4; j++){
    //         cout<<count<<" "<<flush;
    //         count++;
    //     }
    //     cout<<endl;
    // }

//Pattern 1

    // for(int i=0; i<=3; i++){
    //     for(int j=0; j<=i; j++){
    //         cout<<"*"<<flush;
    //     }
    //     cout<<endl;
    // }

//Pattern 2

    // for(int i=0; i<=4; i++){
    //     for (int j=0; j<=4; j++){
    //         if(i<=j){
    //             cout<<"*"<<flush;   
    //         }else{
    //             cout<<" "<<flush;
    //         }
    //     }
    //     cout<<endl;
    // }

//Pattern 3

    for(int i=0; i<=4; i++){
        for(int j=0; j<=4; j++){
            if(i+j>=4){
                cout<<"*"<<flush;
            }else{
                cout<<" "<<flush;
            }
        }
        cout<<endl;
    }
    return 0;
}
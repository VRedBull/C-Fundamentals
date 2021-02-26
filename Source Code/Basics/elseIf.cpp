#include <iostream>
using namespace std;

int main(){
    int day;
    cout<<"Enter day no.="<<endl;
    cin>>day;

    if(day==1){
        cout<<"mon"<<flush;
    }

    else if(day==2){
        cout<<"tue"<<flush;
    }
    
    else if(day==3){
        cout<<"wed"<<flush;
    }
    else if(day==4){
        cout<<"thur"<<flush;
    }
    else if(day==5){
        cout<<"fri"<<flush;
    }
    else if(day==6){
        cout<<"sat"<<flush;
    }
    
    else if(day==7){
        cout<<"sun"<<flush;
    }
    else {
        cout<<"Invalid no.";
    }
}
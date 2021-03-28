#include <iostream>
using namespace std;

int main(){
    int a = 10, b=0;

    try{
        if(b<=0){
            throw "10";
        }else{
            cout<<a/b<<endl;
        }
    }catch(int a){
        cout<<"caught int exception"<<endl;
    }
    catch(string a){
        cout<<a<<endl;
    }
    catch(...){
        cout<<"Caught Default exception"<<endl;
    }

    cout<<"Exit Program"<<endl;
}
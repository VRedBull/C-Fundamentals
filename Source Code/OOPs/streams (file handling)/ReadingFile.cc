#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream ifs("my.txt");

    string name;
    int n;
    string branch;
    
    if(ifs)
        ifs>>name>>n>>branch;
    else
        cout<<"No such file"<<endl;
    ifs.close();

    cout<<"Name: "<<name<<endl;
    cout<<"Age: "<<n<<endl;
    cout<<"Branch: "<<branch<<endl;
}
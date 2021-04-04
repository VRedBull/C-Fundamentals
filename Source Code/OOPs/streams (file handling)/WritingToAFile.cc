#include<iostream>
#include<fstream>
using namespace std;

int main(){

    ofstream ofs("my.txt", ios::app);

    ofs<<"Vikas"<<endl;
    ofs<<20<<endl;
    ofs<<"CompEngg."<<endl;
    
    ofs.close();
}
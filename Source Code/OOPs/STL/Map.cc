#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> m;

    m.insert(pair<int, string>(1,"Vikas"));
    m.insert(pair<int, string>(2,"Vivaan"));
    m.insert(pair<int, string>(3,"Pradhan"));

    map<int, string>::iterator itr;

    for(itr=m.begin(); itr != m.end(); itr++){
        cout<<itr->first<<" "<<itr->second<<endl;
    }

    cout<<"Finding operation in map"<<endl;
    itr = m.find(2);
    cout<<itr->first<<" "<<itr->second<<endl;
}
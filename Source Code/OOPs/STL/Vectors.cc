#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;

    for(int i = 0; i<=15; i++){
       v.push_back(i);
    }

    v.push_back(20);        //Some of the built-in operations functions 
    v.push_back(80);    
    v.pop_back();

    for(int x:v)
        cout<<x<<" "<<flush;
    cout<<endl;

    vector<int>::iterator itr;  //Using the built-in iterator
    
    cout<<"Iteration using the built-in iterator"<<endl;
    
    for(itr=v.begin(); itr!=v.end();itr++)
        cout<<++*itr<<" "<<flush;       //itr is a like a pointer the vector so we can also modify the values also using the iterator

    cout<<endl<<"Iteration using the for each loop after increment"<<endl;
    
    for(int x:v)
        cout<<x<<" "<<flush;

    
}
# STL

STL also known as Standard Template Library.

The Standard Template Library (STL) is a set of C++ template classes to provide common programming data structures and functions such as vectors, lists, stacks, arrays, etc.

## Vector

eg. of a **vector** - Just a dynamic array(i.e. can change size)

```c++
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
        cout<<++*itr<<" "<<flush;       //itr is a like a pointer the vector so we can also modify the values also 										//using the iterator

    cout<<endl<<"Iteration using the for each loop after increment"<<endl;
    
    for(int x:v)
        cout<<x<<" "<<flush;
}

//output
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 20 
Iteration using the built-in iterator
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 21
Iteration using the for each loop after increment
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 21
```

Now in this example we have used vector, now if we want to make it linked-list the we only have to replace the vector keywords to list keyword without changing anything else in the code.

for eg.

```c++
#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> v;

    for(int i = 0; i<=15; i++){
       v.push_back(i);
    }

    v.push_back(20);        //Some of the built-in operations functions 
    v.push_back(80);    
    v.pop_back();

    for(int x:v)
        cout<<x<<" "<<flush;
    cout<<endl;

    list<int>::iterator itr;  //Using the built-in iterator
    
    cout<<"Iteration using the built-in iterator"<<endl;
    
    for(itr=v.begin(); itr!=v.end();itr++)
        cout<<++*itr<<" "<<flush;       //itr is a like a pointer the vector so we can also modify the values also using the iterator

    cout<<endl<<"Iteration using the for each loop after increment"<<endl;
    
    for(int x:v)
        cout<<x<<" "<<flush;
}

//output
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 20 
Iteration using the built-in iterator
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 21
Iteration using the for each loop after increment
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 21
```

Same we can do with other data-structures also like set, forward_list... just we will have to change some of the functions.



## Map

Map are useful for storing key value pair. 

For eg.

```c++
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
//output
1 Vikas
2 Vivaan
3 Pradhan
Finding operation in map
2 Vivaan
```


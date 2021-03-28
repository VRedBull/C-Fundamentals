# Template functions and classes

- Templates are a feature in C++ that allows us to work with different data types without rewriting the code for each different data type.
- For example, a software company may need sort() for different data types. Rather than writing and maintaining the multiple codes, we can write one sort() using template and pass different data type as a parameter.
- <img src="D:\Programming\Programming fundamentals\C++ Fundamentals\Notes\templates-cpp.jpg" style="zoom:80%;" />

for eg.

```c++
#include<iostream>
using namespace std;

template <typename t>	
t maxim(t x, t y){		//using template it can take and return any type of data given to it.
    return x>y?x:y;
}

template <class t>	//we can write class name as well as typename... we have to define it for every function we
t mini(t x, t y){	//want to make as a generic function
    return x>y?y:x;
}


int main(){
    cout<<maxim<int>(21,13)<<endl;		//writing <int> here was optional
    cout<<maxim('m','q')<<endl;
    cout<<mini(2.1,4.1)<<endl;
}
//output
21
q
2.1
```



for template classes refer here - https://www.geeksforgeeks.org/templates-cpp/

Comeback for template classes after you're done with data structures.
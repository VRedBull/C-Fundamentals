# Operator Overloading

- We have many operators in C++. like +, -, /, %, *, etc.

- Consider the + operator, with this operator we can add floats, integers etc.

- Now we cannot directly add complex numbers using this operator. So we will define our own class in which we will overload the + operator so that we can directly add complex numbers.

  For eg.

  ```c++
  #include<iostream>
  using namespace std;
  
  class Complex{
      private:
      int real,img;
      public:
      Complex(int real=0, int img=0){
          this->real=real;
          this->img=img;
      }
  
      Complex add(Complex c){
          Complex temp;
          temp.real=real+c.real;		//"real" = real of c1 object and "c.real"= real of c2 object that is passed
          temp.img=img+c.img;
          return temp;
      }
  
      Complex operator+(Complex c){	//now here just replace the name of add function by operator+ to overload 									//the + operator
          Complex temp;
          temp.real=real+c.real;
          temp.img=img+c.img;
          return temp;
      }
  
      int getImg(){
          return img;
      }
  
      int getReal(){
          return real;
      }
     
  };
  
  int main(){
      Complex c1(3,2),c2(15,6),c3,c4;
      c3=c1.add(c2);	
      c4=c1+c2;			
      cout<<c3.getReal()<<" + "<<c3.getImg()<<"i"<<endl;
      cout<<c4.getReal()<<" + "<<c4.getImg()<<"i"<<endl;
  }
  //output
  18 + 8i
  18 + 8i
  ```



## Friend Operator Overloading

We can also overload a operator using the friend function.

### What is a Friend Function ?

- A friend function is just a function that can access all the properties and functions of the class in which it is declared as a friend.

- To declare a friend function we can...

  ```c++
  #include <iostream>
  using namespace std;
  
  class Data{
      private:
      int x=10,y=20;
      
      public:
      friend int fun();  //Declaring a function as a friend of Data class so it can access all the data
  };
  
  int fun(){
      Data d;
      return d.x+d.y;     //can Access the private properties of class Data as it's declared as a friend function
  }
  
  
  int main(){
      cout<<fun();
  }
  //output
  30
  ```

Now that we know how to use a friend function we can use it to overload a operator. Here's a example

```c++
#include<iostream>
using namespace std;

class Complex{
    private:
    int real,img;
    public:
    Complex(int real=0,int img=0){
        this->real=real;
        this->img=img;
    }

    int getReal(){
        return real;
    }

    int getImg(){
        return img;
    }
    friend Complex operator+(Complex c1, Complex c2);   
};

Complex operator+(Complex c1, Complex c2){
    Complex temp;
    temp.real=c1.real+c2.real;		//it can access the private members of a class as it's a friend function of the 
    temp.img=c1.img+c2.img;			//Data class
    return temp;
}
int main(){
    Complex c1(10,23),c2(3,5),c3;
    c3=c1+c2;
    cout<<c3.getReal()<<"+ i"<<c3.getImg()<<flush;
}
```



## Insertion Operator Overloading

1st go and watch File handling in Cpp then comeback here

- Stream operator overloading Input stream cin >> (extraction) operator can be overloaded upon a class.
- Output stream cout << (insertion) operator can be overloaded upon a class

though you can see the example code

```c++
#include <iostream>
using namespace std;
class Complex
{
private:
 int real;
 int img;
public:
 Complex(int r=0,int i=0)
 {
 real=r;
 img=i;
 }
friend ostream & operator<<(ostream &out,Complex &c);
 };
ostream & operator<<(ostream &out,Complex &c)
{
 out<<c.real<<"+i"<<c.img<<endl;
 return out;
}
int main()
{
 Complex c(10,5);
 cout<<c<<endl;

 operator<<(cout,c);
}
//output
10+i5

10+i5
```


#include <iostream>
using namespace std;

void func(double *p);


int main(){
	int value = 20;
	int *pValue = &value;
	cout<<"The memory address: "<<pValue<<endl;		//can use &value instead of pValue to print memory address
	cout<<"The value stored in the specified memory address: "<<*pValue<<endl;	


	cout<<"======================================="<<endl;

	double x = 20.3;
	cout<<"1. x : "<<x<<endl;
	func(&x);
	cout<<"3. x : "<<x<<endl;
	return 0;
}

void func( double *p){
	*p = 23.1;
	cout<<"2. x : "<<*p<<endl;
	
}



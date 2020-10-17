#include <iostream>
#include "Person.h"
using namespace std;

int main(){
	Person p1;
	p1.setName();
	p1.setAge();
	cout<<"Your Name: "<<p1.getName()<<endl;
	cout<<"Your Age: "<<p1.getAge()<<endl;

	return 0;
}

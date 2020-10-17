#include <iostream>
#include "Person.h"
using namespace std;

int main(){
	Person p1;
	cout<<p1.toString()<<endl;
	
	Person p2("Vivaan", 8, 20);
	Person p3("Vikas", 19, 30);
	Person p4("Sesananda", 50, 40);
	cout<<p2.toString()<<"\nMemory location of object: "<<&p2<<endl;
	cout<<p3.toString()<<"\nMemory location of object: "<<&p3<<endl;
	cout<<p4.toString()<<"\nMemory location of object: "<<&p4<<endl;
	p2.user("Playing Video Game");
	p3.user("Sleeping");
	p4.user("8 ball Poll playing");
	
	return 0;
}

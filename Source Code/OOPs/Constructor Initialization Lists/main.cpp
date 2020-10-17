#include "Person.h"

int main(){
	Person p0;
	Person p1("Vivaan",8);
	Person p2("Ronaldo", 30);
	
	cout<<p0.toString()<<endl;
	cout<<p1.toString()<<endl;
	cout<<p2.toString()<<endl;
	
	return 0;
}

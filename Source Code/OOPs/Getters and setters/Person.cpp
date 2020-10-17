#include <iostream>
#include "Person.h"

using namespace std;

Person::Person(){
	name = "Roy";
}

Person::~Person(){
	
}

void Person::setName(){			//Setter
	cout<<"Type your name:"<<endl;
	cin>>name;
	
}

string Person::getName(){		//Getter
	return name;
}

void Person::setAge(){
	cout<<"Type your Age:"<<endl;
	cin>>age;
}

int Person::getAge(){
	return age;
}

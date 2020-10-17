#include <sstream>
#include "Person.h"


Person::Person(): name("Username"), age(0){
//	name = "Username";
//	age = 0;
}

//Person::Person(string name, int age){
//	this->name = name;
//	this->age = age;
//}

//Instead of using this pointer to set values in constructor we can use constructor initilization list

Person::Person(string name, int age): name(name), age(age){
}

						//the format is classVariable(argumentVariable)
						//We can also it to pass literal values like we did for the default constructor
						//We can also do half of the things in constructor initilization lists and other 
						//half the normal way or by using this pointer
	
	//We can also provide implementation in the header files and remove implementation from cpp files
	//But that is not recommended as writing only prototypes in header files increases readabiltiy of code

string Person::toString(){
	
	stringstream ss;
	ss<<"Name is: "<< name<<"\nAge is: "<<age<<endl;
	
	return ss.str();
}

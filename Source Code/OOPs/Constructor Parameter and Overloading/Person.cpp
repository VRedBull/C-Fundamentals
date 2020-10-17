#include <iostream>
#include <sstream>
#include "Person.h"

using namespace std;

Person::Person(){	//Constructors are usually used for initializing variables of the class
	name = "UserName";
	age = 0;
}  

//_______________________Overloading Constructor_________________________________

//_______________________This KeyWord__________________________kind of like a pointer




Person::Person(string name,int age, int id){
	cout<< "Memory Location : "<<this<<endl;	
	
	this->name = name;
	this->age = age;		//( this->Class Variable = Local Constructor/method argument variable)
	this->id = id;
}

string Person::toString(){
	stringstream ss;
	ss<<"Name is: "<<name<<"\nAge is: "<<age<<" \nID no. = "<<id;	//Concatenating string and integers
	
	return ss.str();
}

void Person::user(string hobby){
	this->hobby = hobby;
	cout<<name<<" have hobby: "<<hobby<<endl;
}


